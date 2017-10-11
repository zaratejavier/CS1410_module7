// File: binaryOperator.cpp
// Created by Javier Zarate on 10/10/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;

// Constants, struct, classes
class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0)    // constructor no arguments
    {}

    Distance(int f, float i)    // constructor with two arguments
    {
        feet = f;
        inches = i;
    }

    void getdist()      //get the legnth for user
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "enter inches: ";
        cin >> inches;
    }

    void showdist()     //display distance
    {
        cout << feet << "\'-" << inches << "\"";
    }

    Distance operator+(Distance) const;   // add 2 distances
    void operator+=(Distance);  // add 1 distance to existing one.


};

//return the sum
Distance Distance::operator+(Distance d2) const {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0) {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

void Distance::operator+=(Distance d2) {
    feet += d2.feet;
    float i = inches + d2.inches;
    float f = 0;
    if (i >= 12.0) {
        i -= 12.0;
        f++;
    }
}
// Prototypes
// Main Program Program

int main(void) {
    Distance d1;
    Distance d2(11, 6.25);
    cout << "Distance d1= ";
    d1.showdist();
    cout << endl;

    cout << "Distance d2= ";
    d2.showdist();
    cout << endl;

    //add binary operator support
    Distance d3 = d1 + d2;
    cout << "Distance d3= ";
    d3.showdist();
    cout << endl;


    return 0;

}

// Function Definitions