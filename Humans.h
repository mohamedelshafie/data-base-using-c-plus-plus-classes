#ifndef __Humans_H__
#define __Humans_H__

#include <iostream>
#include"Abstract.h"
using namespace std;

class Humans:public Abstract{
    private:
        string name;
        int age;
    public:
        Humans();
        Humans(string,int);
        ~Humans();
        void print();
        void set_name(string);
        string get_name();
        void set_age(int);
        int get_age();
        Humans operator++(); //prefix
        Humans operator++(int); //postfix
        Humans operator-(); //unary operatory(-age), not binary operator(age-age).
        bool operator!();
};
Humans::Humans(){
    cout<<"inside Humans empty constructor"<<endl;
}
Humans::Humans(string name,int age){
    cout<<"inside Humans parametrized constructor"<<endl;
    this->name = name;
    this->age = age;
}

Humans::~Humans(){
    cout<<"inside Humans destructor"<<endl;
}
void Humans::print(){
    cout<<"name is "<<this->name<<endl;
    cout<<"age is "<<this->age<<endl;
}
void Humans::set_name(string name){
    this->name = name;
}
string Humans::get_name(){
    return this->name;
}
void Humans::set_age(int age){
    this->age = age;
}
int Humans::get_age(){
    return this->age;
}

Humans Humans::operator++(){
    this->age++;
    return *this;
}
Humans Humans::operator++(int){
    Humans H;
    H = *this;
    this->age++;
    return H;
}
Humans Humans::operator-(){
    this->age;
    return *this;
}

bool Humans::operator!(){
    return (age==0);
}
#endif