// SimulinkRelease.h
class SLXIO_APIEXPORT SimulinkRelease final {
public:
    constexpr SimulinkRelease(UInt16 year, char letter) : year_(year), letter_(letter) {}
    static std::optional<SimulinkRelease> Parse(std::string_view s); // "R2023b", "23.2", "10.4"
    constexpr UInt16 Year()   const { return year_; }
    constexpr char   Letter() const { return letter_; }
    constexpr UInt32 Ordinal() const { return year_ * 2u + (letter_ == 'b'); }
    std::string ToString() const;                                    // "R2023b"
    constexpr auto operator<=>(const SimulinkRelease& o) const { return Ordinal() <=> o.Ordinal(); }
    constexpr bool operator==(const SimulinkRelease&) const = default;
private:
    UInt16 year_; char letter_;
};

namespace releases {                 // named constants, no enum needed
inline constexpr SimulinkRelease R2018a{2018,'a'}, R2019b{2019,'b'}, R2023b{2023,'b'}, R2025b{2025,'b'};
}

struct ReleaseRange {                // like a variant condition
    SimulinkRelease min{2008,'a'};
    std::optional<SimulinkRelease> max; // empty = open-ended, so future releases still match
    constexpr bool Contains(SimulinkRelease r) const { return r >= min && (!max || r <= *max); }
};

enum class Feature { SplitSystemParts, SeparateConfigSet, GraphicalInterfacePart, /*...*/ };

struct FeatureRule { Feature feature; ReleaseRange range; };

inline constexpr FeatureRule kFeatureTable[] = {
    { Feature::SplitSystemParts,       { releases::R2018a } },               // check against real files
    { Feature::SeparateConfigSet,      { releases::R2019b } },
    { Feature::GraphicalInterfacePart, { releases::R2018a, releases::R2023b } },
};

class FeatureSet {                   // resolved once per opened file
public:
    static FeatureSet For(SimulinkRelease r);
    static FeatureSet Probe(const IPackage& pkg);  // detect from the parts actually present
    bool Has(Feature f) const;
    void Override(Feature f, bool on);             // user/test override
};