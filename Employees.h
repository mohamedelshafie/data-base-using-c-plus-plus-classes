#ifndef __Employees_H__
#define __Employees_H__

#include <iostream>
#include "Humans.h"
using namespace std;

class Employees:public Humans{
    private:
        int salary;
    public:
        Employees(string,int,int);
        Employees(Employees&);
        ~Employees();
        void print();
        void set_salary(int);
        int get_salary();
        friend void raise_all_salary(Employees *,int);
        virtual void raise_salary(){
            cout<<"raise"<<endl;
        }
        
};
Employees::Employees(string name, int age,int salary):Humans(name,age){
    cout<<"inside Employees parametrized constructor"<<endl;
    this->salary = salary;
    //Humans(name,age);
    
}
Employees::Employees(Employees& emp){
    this->salary = emp.salary;
}
Employees::~Employees(){
    cout<<"inside Employees destructor"<<endl;
}
void Employees::print(){
    Humans::print(); //instead of super, like in python.
    cout<<"salary is "<<salary<<endl;
}
void Employees::set_salary(int salary){
    this->salary = salary;
}
int Employees::get_salary(){
    return this->salary;
}
void raise_all_salary(Employees *emp[],int n){
    for(int i=0;i<n;i++){
        emp[i]->raise_salary();
    }
}

#endif