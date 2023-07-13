#include<iostream>
using namespace std;

class complex 
{
    public:
    static int real=1;
    float imag;

    void getnum()
    { 

        cout<<"enter the imaginery number:"<<endl;
        cin>>imag;
    }
    void display()
    {
        cout<<real<<","<<imag<<endl;
    }
};

int main()
{
    float real,imag;
    complex c;
    c.getnum();
    cout<<"the complex number is:"<<endl;
    c.display();
}