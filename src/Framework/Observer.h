#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subject.h"
class Subject;
class Observer
{
public:
    Observer(Subject *);
    virtual ~Observer();
    virtual void update() = 0;

protected:
    Subject *getSubject() const;

private:
    Subject *S;
};

#endif // OBSERVER_H
