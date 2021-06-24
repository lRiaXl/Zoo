#include <iostream>
#include "ianimal.h"
#include "poule.h"

using namespace std;

Poule::Poule()
{

}

Poule::Poule(string name, int age)
    :IAnimal(name, age)
{

}
string Poule::getName()
{

    return name;
}
int Poule::getAge()
{
    return age;
}
string Poule::getInfos()
{
    string result = getName() + " " + to_string(getAge());
    return result;
}
