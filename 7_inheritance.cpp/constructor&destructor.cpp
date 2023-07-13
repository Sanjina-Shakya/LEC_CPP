#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"this is base class"<<endl;
    }
    ~base()
    {
        cout<<"this is base class"<<endl;
    }
   
};

class derived:public base
{
    public:
    derived()
    {
        cout<<"this is derived class"<<endl;
    }
    ~derived()
    {
        cout<<"this is derived class"<<endl;
    }

};
int main()
{
    derived b1;
    return 0;
}