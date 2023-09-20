#ifndef __Abstract_H__
#define __Abstract_H__

#include <iostream>
using namespace std;
class Abstract{
    public:
        //pure virtual functions:
        virtual void print()=0;
        virtual void set_name(string)=0;
        virtual string get_name()=0;
        virtual void set_age(int)=0;
        virtual int get_age()=0;
};

#endif