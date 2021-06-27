#pragma once

#include <memory>
#include <set>

#include "Subject.h"

class Observer
{
public:
    std::unique_ptr<std::set<Subject*>> subjects;

    Observer();
    virtual ~Observer();

    virtual void attachSubj(Subject *subject);
    virtual void detachSubj(Subject *subject);
};
