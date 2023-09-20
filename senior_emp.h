#ifndef __senior_emp_H__
#define __senior_emp_H__

#include <iostream>
#include "Employees.h"
using namespace std;

class senior_emp:public Employees{
    private:

    public:
        senior_emp(string,int,int);
        ~senior_emp();
        void raise_salary();
};

senior_emp::senior_emp(string name,int age,int salary):Employees(name,age,salary){
    cout<<"inside senior Employees parametrized constructor"<<endl;
}
senior_emp::~senior_emp(){
    cout<<"inside senior Employees destructor"<<endl;
}
void senior_emp::raise_salary(){
    this->set_salary(this->get_salary()+1500);
}
#endif