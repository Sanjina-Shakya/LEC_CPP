#include <iostream>
using namespace std;

class mobile
{
    private:
    int m=10;

    public:
    void display()
    {
        cout<<"the value of m is:"<<m<<endl;
        cout<<"the value is what is:"<<this->m<<endl;
        cout<<"the value of this object is:"<<this<<endl;
    }
};

int main()
{
    mobile m1,m2;
    m1.display();

}