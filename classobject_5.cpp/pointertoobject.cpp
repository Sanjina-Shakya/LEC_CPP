#include<iostream>
using namespace std;
class employee
{
    private:
    char name[25];
    float salary;
    public:
    void getdata()
    {
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"enter salary:";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"\nName:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main()
{
    employee *eptr;
    employee e;
    eptr=&e;
    eptr->getdata();
    cout<<"\nAccessing data hrough pointer variable";
    eptr -> showdata();
    return 0;
}