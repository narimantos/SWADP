#include "SubjectSnelheid.h"
#include <iostream>
using namespace std;
SubjectSnelheid::SubjectSnelheid() : val(0)
{
    //ctor
}

SubjectSnelheid::~SubjectSnelheid()
{
    //dtor
}

int SubjectSnelheid::waarde()
{

    return val;
}

void SubjectSnelheid::meet(int x)
{
    val = x;
    notify();
}
