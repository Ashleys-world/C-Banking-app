#include "banker.h"

Banker::Banker()
{
}

Banker::Banker(int ages)
{
    age = ages ;
}

void Banker::setAge(int ages)
{
    age = ages ;
}

void Banker::setName(string names)
{
    name = names ;
}

void Banker::setOccupation(char occupations)
{
    occupation = occupations ;
}

void Banker::setSalary(float salaries)
{
    salary = salaries ;
}

int Banker::getAge()
{
    return age ;
}

string Banker::getName()
{
    return name ;
}

char Banker::getOccupation()
{
    return occupation ;
}

float Banker::getSalary()
{
    return salary ;
}
