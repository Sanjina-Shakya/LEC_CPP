#include<iostream>
using namespace std;
class Account {
public:
float salary=6000;
    Account(){
    cout<<"This is account"<<endl;
}

};//base class
class Programmer:public Account {
public:
float bonus=5000;

};//derived class

int main(void){
    class Account a1;
   class Programmer p1;
}
