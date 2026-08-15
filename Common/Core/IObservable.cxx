#include "IObservable.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

void IObservable::Attach(IObserver* obs) {
if(obs!=nullptr){
    m_observers.push_back(obs);
}
}

void IObservable::Detach(IObserver* obs) {
m_observers.erase(std::remove(m_observers.begin(), m_observers.end(), obs),
                      m_observers.end());
}

void IObservable::Update(const IObservationMessage& msg) {
           for (auto* obs : m_observers) {
            if (obs) obs->Update(msg);
        }
}

SLXIO_ABI_NAMESPACE_END

} // namespace slxio