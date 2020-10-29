#include "ObDigitaleMeter.h"
#include "SubjectSnelheid.h"
#include <iostream>

ObDigitaleMeter::ObDigitaleMeter(SubjectSnelheid *t) : Observer(t)
{
}

ObDigitaleMeter::~ObDigitaleMeter()
{
}

void ObDigitaleMeter::update()
{
    cout << "Digitaal: " << dynamic_cast<SubjectSnelheid *>(getSubject())->waarde() << "\n";
}
