#ifndef AIGLE_H
#define AIGLE_H
#include <string>
#include "ianimal.h"

using namespace std;

class Aigle:public IAnimal
{
    string name = "Aigle";
    int age;
public:
    Aigle();
    Aigle(string name, int age);
    string getName();
    int getAge();
    string getInfos();
};

#endif // AIGLE_H
