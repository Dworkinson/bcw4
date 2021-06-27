#include "Observer.h"

Observer::Observer()
{
    subjects = std::make_unique<std::set<Subject*>>();
}

Observer::~Observer() = default;

void Observer::attachSubj(Subject *subject)
{
    this->subjects->emplace(subject);
}

void Observer::detachSubj(Subject *subject)
{
    this->subjects->erase(subject);
}
