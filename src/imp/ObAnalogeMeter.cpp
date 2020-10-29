#include "ObAnalogeMeter.h"
#include "SubjectSnelheid.h"
#include <iostream>
ObAnalogeMeter::ObAnalogeMeter(SubjectSnelheid *t) : Observer(t)
{
    //ctor
}

ObAnalogeMeter::~ObAnalogeMeter()
{
    //dtor
}
void ObAnalogeMeter::update()
{
    cout << "Analoog: " << dynamic_cast<SubjectSnelheid *>(getSubject())->waarde() << "\n";
}
