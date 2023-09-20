#include <iostream>
#include"Abstract.h"
#include "Humans.h"
#include "Students.h"
#include "Employees.h"
#include "junior_emp.h"
#include "senior_emp.h"
using namespace std;


int main(){
    //Students s1("moh",12,80);
    //s1.print();

    //Employees e1("mos",24,4000);
    //e1.print();

    //Humans h1;
    //Abstract a1; //will give an error.

    /*junior_emp j1("mohamed",23,4000);
    senior_emp s1("ahmed",30,5000);
    Employees emp[2]={j1,s1};
    Employees *emp_ptr[2];
    emp_ptr[0] = &j1;
    emp_ptr[1] = &s1;
    raise_all_salary(emp_ptr,2);
    j1.print();
    s1.print();*/

    /*Students st1("moh",12,80);
    Students st2("moh",12,20);
    Students st4("moh",12,20);
    Students st3("mos",10,0);
    st3 = st1 + st2 + st4;
    st3.set_name("mos");
    st3.set_age(10);
    st3.print();*/

    /*Humans h1("moh",15),h2;
    h1++;
    h2 = h1++;
    h1.print();
    h2.print();*/

    /*Students st1("moh",12,80);
    Students st2("moh",12,20);
    Students st4("moh",12,0);
    Students st3("mos",10,0);
    st3 = st1 + 20;
    st4 = st2 + 10;
    st3.set_name("mos");
    st3.set_age(10);
    st3.print();
    st4.print();*/
}