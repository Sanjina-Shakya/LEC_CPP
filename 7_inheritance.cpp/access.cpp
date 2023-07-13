#include<iostream>
using namespace std;

class parent
{
    protected:
    int id_protected;
};
class child: public parent
{
    public:
    void setid (int id)
    {
        id_protected=id;
    }
    void display()
    {
        cout<<"id_protected is : "<<id_protected<<endl;
    }
};
int main()
{
    child c1;
    c1.setid(4);
    c1.display();
    return 0;
}

// illustrate the features of oop along with example
// difference between oop and pop
// define constructor with type
// matrix multiplication ko operator overloading or prefix postfix
// unary member/non member function
// binary non/member fuction
// explain implementation of friend function with Eg 
// type of inheritance with example
// difference between access specifier 
// speciial type of member function
