#ifndef OBANALOGEMETER_H
#define OBANALOGEMETER_H

#include "SubjectSnelheid.h"

class ObAnalogeMeter : public Observer
{
public:
    ObAnalogeMeter(SubjectSnelheid *);
    virtual ~ObAnalogeMeter();
    virtual void update();

protected:
private:
};

#endif // OBANALOGEMETER_H
