#include <iostream>
#include "ianimal.h"
#include "aigle.h"
using namespace std;
Aigle::Aigle()
{

}


Aigle::Aigle(string name, int age)
    :IAnimal(name, age)
{

}
string Aigle::getName()
{

    return name;
}
int Aigle::getAge()
{
    return age;
}
string Aigle::getInfos()
{
    string result = getName() + " " + to_string(getAge());
    return result;
}
