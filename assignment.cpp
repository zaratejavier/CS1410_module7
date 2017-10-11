// File: assignment.cpp
// Created by Javier Zarate on 10/10/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;

// Constants, struct, classes
class Counter
{
private:
    unsigned int count;

public:
    Counter(): count(0)     //stuctructor
    {};
    Counter(int c): count(c)    //construcotor wiht one arg
    {};

    unsigned int get_count()    //returns count
    {
        return count;
    }

    // the operator key word is used to overload
    // the operator in hand
    Counter operator ++()      //increment prefix
    {
        ++count;
        return Counter(count);
    }
    Counter operator ++ (int)       //increment postfix
    {
        return Counter(count++);

    }
};
// Prototypes

// Main Program Program
int main(void)
{

    Counter c1,c2, c3,c4;
    cout<<"c1 = "<<c1.get_count()<<endl;
    cout<<"c2 = "<<c2.get_count()<<endl;
    ++c1;
    ++c2;
    cout<<"c1 = "<<c1.get_count()<<endl;
    cout<<"c2 = "<<c2.get_count()<<endl;

    c3 = ++c1;
    cout<<"c1 = "<<c1.get_count()<<endl;
    cout<<"c3 = "<<c3.get_count()<<endl;

    c4 = c1++;
    cout<<"c1 = "<<c1.get_count()<<endl;
    cout<<"c4 = "<<c4.get_count()<<endl;



    return 0;

}

// Function Definitions