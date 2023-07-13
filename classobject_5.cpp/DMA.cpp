#include<iostream>
using namespace std;

int *roll = new int;
char *name = new char[15];

void scanRollandName()
{
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter the roll number:"<<endl;
    cin>>*roll;
}

void freeMemory()
{
    delete roll;
    delete [] name;
}

void printRollandName()
{
    cout<<endl<<"name:"<<name;
    cout<<endl<<"roll no:"<<*roll;
}

int main()
{
    scanRollandName();
    cout<<endl<<"memory allocated dynamically for name and roll number:";
    cout<<endl<<"Value of Name and Roll before deallocation";
    printRollandName();
    freeMemory();
    cout<<"\n\nAfter Deallocation: ";
    printRollandName();
    return 0;
}