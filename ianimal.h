#ifndef IANIMAL_H
#define IANIMAL_H
#include <string>

using namespace std;

class IAnimal
{
    string m_name;

public:
    IAnimal();
    IAnimal(string m_name);
    virtual ~IAnimal();

};

#endif // IANIMAL_H
