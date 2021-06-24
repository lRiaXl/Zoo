#include "zoo.h"
#include <iostream>

Zoo::Zoo(string name)
    :m_name(name)
{

}

string Zoo::getName()
{

    return m_name;
}

void Zoo::addAnimal(IAnimal *animal)
{
    m_animals.push_back(animal);
}
void Zoo::printAnimals()
{
    for (size_t i = 0; i < m_animals.size(); i++) {
        cout << m_animals[i]->getInfos() << endl;
    }
}
