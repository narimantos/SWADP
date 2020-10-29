
#include "imp/SubjectSnelheid.h"
#include "imp/ObDigitaleMeter.h"
#include "imp/ObAnalogeMeter.h"

#include <iostream>

int main()
{
    SubjectSnelheid S;

    ObDigitaleMeter DM(&S);
    ObAnalogeMeter AM(&S);
    cout << S.waarde() << "\n";

    S.meet(199);
    cout << S.waarde() << "\n";
    return 0;
}