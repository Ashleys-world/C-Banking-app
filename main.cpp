#include "banker.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{

    int m_age ;
    string m_name ;
    char m_occupation ;
    float m_salary ;

    Banker customer1 ;

    cout << "***********************************" << endl;
    cout << "Welcome to the Bank of South Africa" << endl;
    cout << "***********************************" << endl;

    cout << "Enter your name: " ;
    cin >> m_name ;

    cout << "Enter your age: " ;
    cin >> m_age ;

    cout << "Enter your occupation (S for student)" << endl;
    cout << "(W for Worker): " ;
    cin >> m_occupation ;

    cout << "Enter your salary: R";
    cin >> m_salary ;

    customer1.setName(m_name);
    customer1.setAge(m_age);
    customer1.setOccupation(m_occupation);
    customer1.setSalary(m_salary);

    cout << "***********************************" << endl;

    if((customer1.getOccupation() == 'W' || customer1.getOccupation() == 'w')
       && (customer1.getSalary() < 5000))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify for a Savings Account " << endl ;
    }
    if((customer1.getOccupation() == 'W' || customer1.getOccupation() == 'w')
       && ((customer1.getSalary() >= 5000) && (customer1.getSalary()< 10000)))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify for a Savings Account and" << endl ;
        cout << "a Transactional account" << endl ;
    }
    if((customer1.getOccupation() == 'W' || customer1.getOccupation() == 'w')
       && ((customer1.getSalary() >= 10000)))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify for Savings,Transactional" << endl ;
        cout << "and Private Clients accounts" << endl ;
    }

    //Processing for student
    if((customer1.getAge() < 18 ))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify for a Savings Account " << endl ;
    }
    if((customer1.getOccupation() == 'S' || customer1.getOccupation() == 's')
       && ((customer1.getSalary() < 5000)))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify for a Savings Account" << endl ;
    }
    if((customer1.getOccupation() == 'S' || customer1.getOccupation() == 's')
       && ((customer1.getSalary() >= 5000)&&(customer1.getSalary()<10000)))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify for Savings and" << endl ;
        cout << "Transactional accounts " << endl ;
    }
    if((customer1.getOccupation() == 'S' || customer1.getOccupation() == 's')
       && ((customer1.getSalary() >= 10000)))
    {
        cout << "Dear " << customer1.getName() << endl ;
        cout << "You qualify only for Savings and" << endl ;
        cout << "Transactional accounts , " << endl ;
        cout << "Unfortunately we do not provide " << endl ;
        cout << "Private clients services to students" << endl;
    }

    cout << "************************************" << endl;
    cout << "Thank you for considering the Bank " << endl ;
    cout << "of South Africa" << endl ;
    cout << "************************************" << endl;

    return 0;
}

