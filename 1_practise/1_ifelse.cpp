#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"enter the number:"<<endl;
    cin>>number;

    if(number>0){
        cout<<"the number is positive"<<endl;
        if (number>100)
        {
            cout<<"the number is more than 100.";
        }
        else{
            cout<<"the number is less than 100.";
        }
        }
    else{
        cout<<"the number is negative";
    }
    return (0);
};