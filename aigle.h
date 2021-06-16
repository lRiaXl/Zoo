#ifndef AIGLE_H
#define AIGLE_H
#include <string>
#include "ianimal.h"

using namespace std;

class Aigle:public IAnimal
{
    int aigleCount = 1;
public:
    Aigle();
    Aigle(string name);
};

#endif // AIGLE_H
