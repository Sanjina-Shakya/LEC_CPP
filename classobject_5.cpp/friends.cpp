#include<iostream>
using namespace std;

class friends
{
    public:
    char name[30];
    char rollno[30];
    char address[30];

    void fname()
    {
        cout<<"enter name of friend:";
        cin>>name;

    }
    void froll()
    {
        cout<<"the roll number is:"<<endl;
        cin>>rollno;
    }
    void faddress()
    {
        cout<<"the address is:"<<endl;
        cin>>address;
    }

};

int main()
{
    friends f1,f2,f3;
  
    f1.fname();
    f1.froll();
    f1.faddress();

    f2.fname();
    f2.froll();
    f2.faddress();

    f3.fname();
    f3.froll();
    f3.faddress();

}