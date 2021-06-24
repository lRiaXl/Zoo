#ifndef TIGRE_H
#define TIGRE_H

#include "ianimal.h"

#include <string>

using namespace std;

class Tigre:public IAnimal
{
    string name = "Tigre";
    int age;
public:
    Tigre();
    Tigre(string name, int age);
    string getName();
    int getAge();
    string getInfos();
};

#endif // TIGRE_H
