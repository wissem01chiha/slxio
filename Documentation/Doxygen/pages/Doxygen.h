





/**
 * @page examples Examples
 *
 * This page provides practical examples of how to use SLXIO in your own
 * projects.
 *
 * - @subpage load
 *
 * ---
 *
 * @subsection integrate_section 3.1 Integrate in Other Projects
 *
 * *(Add integration instructions or code snippets here if needed.)*
 *
 * ---
 *
 * @subsection read_slx_section 3.2 Reading an SLX File
 *
 * The following example demonstrates how to read an SLX file using SLXIO:
 *
 * @code{.cpp}
 * #include "SLXIO.h"
 *
 * int main() {
 *     slxio::SLXModel model = slxio::read("example_model.slx");
 *
 *     std::cout << "Version: " << model.version() << std::endl;
 *     std::cout << "Name: " << model.name() << std::endl;
 *
 *     for (const auto& block : model.blocks()) {
 *         std::cout << block.name() << " [" << block.type() << "] at "
 *                   << block.position().x() << "," << block.position().y() <<
 * std::endl;
 *     }
 *
 *     for (const auto& chart : model.stateflow().charts()) {
 *         std::cout << "Chart: " << chart.name() << std::endl;
 *         for (const auto& t : chart.transitions()) {
 *             std::cout << "  " << t.source() << " -> " << t.target()
 *                       << " if \"" << t.condition() << "\"" << std::endl;
 *         }
 *     }
 *
 *     return 0;
 * }
 * @endcode
 *
 * ---
 *
 * @subsection write_slx_section 3.3 Writing an SLX File
 *
 * *(Add example code for writing an SLX file here.)*
 */