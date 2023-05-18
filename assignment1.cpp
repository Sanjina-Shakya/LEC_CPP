#include<iostream>
using namespace std;

class student {
    public:
    char assignment[10];
    int roll;
void read (){
    cout<<"enter roll no:";
    cin>>roll;
}
void assign(){
   cout<<"assignment complete or not[y/n]:";
    cin>>assignment;
}
void info(){
    cout<<"roll no"<<roll<<endl;
    cout<<"assignment status:"<<assignment<<endl;
}
};
int main(){
    student niruja,lijala;
    cout<<"student:niruja"<<endl;
    niruja.read();
    niruja.assign();
    niruja.info();

    cout<<"student:lijala"<<endl;
    lijala.read();
    lijala.assign();
    lijala.info();

    return 0;
}