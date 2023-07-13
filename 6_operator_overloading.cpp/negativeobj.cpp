#include<iostream>
using namespace std;

class Operator
{
    public:
    int a,b,c;

    Operator(int x, int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }

    void getdata()
    {
        cout<<"enter a:"<<a<<endl;
        cout<<"enter b:"<<b<<endl;
        cout<<"enter c"<<c<<endl;
    }
    
    void operator-()
    {
        a=-a;
        b=-b;
        c=-c;
    }
};
int main()
{
    Operator a(10,20,30);
    -a;
    a.getdata();
    return 0;
}