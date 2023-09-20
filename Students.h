#ifndef __Students_H__
#define __Students_H__

#include <iostream>
#include "Humans.h"
using namespace std;

class Students:public Humans{
    private:
        int grade;
    public:
        Students();
        Students(string, int,int);
        ~Students();
        void print();
        void set_grade(int);
        int get_grade();
        //void add(Students,Students);
        Students add(Students,Students);
        Students add(Students s1);
        Students operator+(Students s1);
        Students operator+(int n);
        friend Students operator+(int n, Students s1);

};
Students::Students(){
    cout<<"inside Students empty constructor"<<endl;
}
Students::Students(string name, int age,int grade):Humans(name,age){
    cout<<"inside Students parametrized constructor"<<endl;
    this->grade = grade;
    //Humans(name,age);
    
}
Students::~Students(){
    cout<<"inside Students destructor"<<endl;
}
void Students::print(){
    Humans::print(); //instead of super, like in python.
    cout<<"grade is "<<grade<<endl;
}
void Students::set_grade(int grade){
    this->grade = grade;
}
int Students::get_grade(){
    return this->grade;
}
/*void Students::add(Students s1,Students s2){
    this->grade = s1.grade + s2.grade;
}*/
//or
Students Students::add(Students s1,Students s2){
    Students S;
    S.grade = s1.grade + s2.grade;
    return S;
}
//or
Students Students::add(Students s2){
    Students S;
    S.grade = s2.grade + this->grade;
    return S;
}
//or(operator overloading):
Students Students::operator+(Students s2){ // in case: st3 = st1 + st2;
    Students S;
    S.grade = s2.grade + this->grade;
    return S;
}
//or:
Students Students::operator+(int n){ //in case: st3 = st1 + 11;
    Students S;
    S.grade = n + this->grade;
    return S;
}
//or:
Students operator+(int n, Students s1){ //in case: st3 = 11 + st1;
    Students S;
    S.grade = n + s1.grade;
    return S;
}
#endif