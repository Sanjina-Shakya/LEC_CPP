#include<iostream>
using namespace std;

class A{
    public:
    int data;
    
    void getdata(){
        cout<<"enter the value of data:";
        cin>>data;
    }
    void showdata(){
        cout<<"the data is:";
    }
};
class B{
    public:
     A a;
    int b;
    
    void getdata()
    {
        b.getdata;
        cout<<"enter the value of b:";
        cin>>b;
    }
    void showdata(){
        a.showdata;
        cout<<"the value of b is:";
        cin>>b;
    }
};
    int main(){
        B b;
        b.getdata();
        b.showdata();
        return 0;
    }

