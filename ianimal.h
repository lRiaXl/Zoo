#ifndef IANIMAL_H
#define IANIMAL_H
#include <string>

using namespace std;

class IAnimal
{
    string m_name;
    int m_age;

public:
    IAnimal();
    IAnimal(string m_name, int m_age);
    virtual ~IAnimal();
    virtual string getName();
    virtual int getAge();
    virtual string getInfos();

};

#endif // IANIMAL_H
