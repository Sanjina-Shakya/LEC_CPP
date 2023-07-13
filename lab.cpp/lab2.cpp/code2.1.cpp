#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int getnum()
{
    int m;
    cout<<"enter a number:"<<endl;
    cin>>m;
    return m;
}
int main(){
    int a=getnum();
    int b=getnum();
    cout <<"before swap:"<<a<<b;
    swap(a,b);
    cout<<"after swap:"<<a<<b;
    return 0;
}

