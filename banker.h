#ifndef BANKER_H
#define BANKER_H
#include <string>
#include <iostream>
using namespace std;

class Banker
{
public:
    Banker();
    Banker(int ages);
    void setAge(int ages);
    void setName(string names);
    void setOccupation(char occupations);
    void setSalary(float salaries);

    int getAge();
    string getName();
    char getOccupation();
    float getSalary();

private:
    int age ;
    string name ;
    char occupation ;
    float salary ;

};

#endif // BANKER_H
