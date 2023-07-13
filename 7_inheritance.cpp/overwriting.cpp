#include<iostream>
using namespace std;

class parent
{
    public:
    void print()
    {
        cout<<"this is parent class"<<endl;
    }

};
class child:public parent
{
    private:
    char name[20];
    public:
    void print()
    {
        parent:print();
        cout<<"this is child class"<<endl;
        cin>>name;
    }
};

int main()
{
    parent p1
    child c1;
    c1.print();
    parent *Bptr;
    Bptr=&c1;
    Bptr->print();
    *Bptr.print();
    // parent p1;
    // child c1;
    // c1.print();
    // c1.print();
    // p1.print();
    return 0;
}