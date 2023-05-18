#include<iostream>
using namespace std;

class Room {
    public:
    int length;
    int breadth;
    int height;
    void enter(){
     cout<<"enter length:";
        cin>>length;
        cout<<"enter breadth:";
        cin>>breadth;
        cout<<"enter height:";
        cin>>height;
    }
    void calculateArea(){
        cout<<"The area of room is:"<<length*breadth;
        }
    void calculateVolume(){
        cout<<"\nThe volume of room is:"<<length*breadth*height;
    }    
    };
    int main()
    {
        Room obj401;
        obj401.enter();
        obj401.calculateArea();
        obj401.calculateVolume();

    }