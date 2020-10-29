#ifndef SUBJECTSNELHEID_H
#define SUBJECTSNELHEID_H

#include "../Framework/Subject.h"

class SubjectSnelheid : public Subject
{
public:
    SubjectSnelheid();
    virtual ~SubjectSnelheid();
    virtual void meet(int);
    virtual int waarde();

protected:
private:
    int val;
};

#endif // SUBJECTSNELHEID_H
