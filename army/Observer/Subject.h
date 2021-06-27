#pragma once

#include <memory>
#include <set>

class Observer;

class Subject
{
public:
    std::unique_ptr<std::set<Observer*>> observers;


    Subject();
    virtual ~Subject();

    virtual void attachObs(Observer* observer);
    virtual void detachObs(Observer* observer);
};
