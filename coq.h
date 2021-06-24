#ifndef COQ_H
#define COQ_H
#include <string>
#include "ianimal.h"

using namespace std;

class Coq:public IAnimal
{
    string name = "Coq";
    int age;
public:
    Coq();
    Coq(string name, int age);
    string getName();
    int getAge();
    string getInfos();
};

#endif // COQ_H
