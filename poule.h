#ifndef POULE_H
#define POULE_H
#include <string>
#include "ianimal.h"

using namespace std;


class Poule:public IAnimal
{
    string name = "Poule";
    int age;
public:
    Poule();
    Poule(string name, int age);
    string getName();
    int getAge();
    string getInfos();
};

#endif // POULE_H
