#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;

public:
    Counter(): count(0)     //constructor
    {};

    unsigned int get_count()    //returns count
    {
        return count;
    }

    // the operator key word is used to overload
    // the operator in hand
    void operator ++()      //increment prefix
    {
        ++count;
    }
};

//main
int main()
{
    Counter c1,c2;
    cout<<"c1 = "<<c1.get_count()<<endl;
    cout<<"c2 = "<<c2.get_count()<<endl;
    //TODO ++c1
    ++c1;
    ++c2;
    cout<<"c1 = "<<c1.get_count()<<endl;
    cout<<"c2 = "<<c2.get_count()<<endl;
    //c1 = ++c2
    return 0;
}