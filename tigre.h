#ifndef TIGRE_H
#define TIGRE_H

#include "ianimal.h"

#include <string>

using namespace std;

class Tigre:public IAnimal
{
    int tigreCount = 1;
public:
    Tigre();
    Tigre(string name);
};

#endif // TIGRE_H
