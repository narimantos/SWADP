#ifndef OBDIGITALEMETER_H
#define OBDIGITALEMETER_H

#include "SubjectSnelheid.h"
class ObDigitaleMeter : public Observer
{

public:
    ObDigitaleMeter(SubjectSnelheid *);
    virtual void update();
    virtual ~ObDigitaleMeter();

protected:
private:
};

#endif // OBDIGITALEMETER_H
