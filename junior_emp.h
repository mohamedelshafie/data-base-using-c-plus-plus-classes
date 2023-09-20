#ifndef __junior_emp_H__
#define __junior_emp_H__

#include <iostream>
#include "Employees.h"
using namespace std;


class junior_emp:public Employees{
    private:

    public:
        junior_emp(string,int,int);
        ~junior_emp();
        void raise_salary();
};

junior_emp::junior_emp(string name,int age,int salary):Employees(name,age,salary){
    cout<<"inside Junior Employees parametrized constructor"<<endl;
}
junior_emp::~junior_emp(){
    cout<<"inside Junior Employees destructor"<<endl;
}
void junior_emp::raise_salary(){
    this->set_salary(this->get_salary()+1000);
}

#endif