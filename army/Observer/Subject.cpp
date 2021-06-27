#include "Subject.h"

Subject::Subject()
{
    observers = std::make_unique<std::set<Observer*>>();
}

Subject::~Subject() = default;

void Subject::attachObs(Observer* observer)
{
    this->observers->emplace(observer);
}

void Subject::detachObs(Observer* observer)
{
    this->observers->erase(observer);
}
