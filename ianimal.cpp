#include "ianimal.h"

IAnimal::IAnimal()
    :m_name("Animal sans Nom")
{

}

IAnimal::IAnimal(string name, int age)
    :m_name(name),
    m_age(age)
{

}

IAnimal::~IAnimal()
{

}

string IAnimal::getName()
{
    return m_name;
}

int IAnimal::getAge()
{
    return m_age;
}

string IAnimal::getInfos()
{
    string result = getName() + " " + to_string(getAge());
    return result;
}