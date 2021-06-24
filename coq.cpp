#include <iostream>
#include "ianimal.h"
#include "coq.h"
using namespace std;
Coq::Coq()
{

}


Coq::Coq(string name, int age)
    :IAnimal(name, age)
{

}
string Coq::getName()
{

    return name;
}
int Coq::getAge()
{
    return age;
}
string Coq::getInfos()
{
    string result = getName() + " " + to_string(getAge());
    return result;
}