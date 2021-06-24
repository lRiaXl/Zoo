#ifndef ZOO_H
#define ZOO_H
#include "ianimal.h"
#include "aigle.h"
#include "poule.h"
#include "tigre.h"
#include "coq.h"


#include <vector>
#include <string>

using namespace std;
typedef vector <IAnimal*> AnimalList;
typedef AnimalList::iterator AnimalIterator;
// extern int money = 1000;
class Zoo
{
    string m_name;
    AnimalList m_animals;  
public:
    Zoo(string name = "");
    string getName();
    void addAnimal(IAnimal* animal);
    void printAnimals();
};

#endif // ZOO_H
