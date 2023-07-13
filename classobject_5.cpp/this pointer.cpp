#include<iostream>
using namespace std;

class A
{
    int x;

    public:
    void getnum()
    {
       this->x=x;
    }
    void shownum()
    {
        cout<<"the value of x is"<<x;
    }
};

int main()
{
    A obj1();
    obj1.getnum();
    obj1.shownum();
}