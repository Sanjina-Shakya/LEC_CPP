

#include<iostream>
#include"person.h"
using namespace std;
void person::getdata()
{
    cout<<"entr name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
}
void person::display()
{
    cout<<"name:"<<name<<endl;
    cin>>"age:">>age>>endl;
}