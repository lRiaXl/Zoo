#include <iostream>
#include "ianimal.h"
#include "tigre.h"

using namespace std;

Tigre::Tigre()
{

}

Tigre::Tigre(string name, int age)
    :IAnimal(name, age)
{

}
string Tigre::getName()
{

    return name;
}
int Tigre::getAge()
{
    return age;
}
string Tigre::getInfos()
{
    string result = getName() + " " + to_string(getAge());
    return result;
}