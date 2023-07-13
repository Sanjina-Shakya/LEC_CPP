#include<iostream>
using namespace std;

class student{
    private:
    int name;
    float marks;
    student(double m){
        marks=m;
    }
};
void caculateAverage(student s1, student s2)
{
    double average = (s1.marks+s2.marks)/2;
    cout <<"the average is:"<<average;

}

int main()
{
    student s1(23),s2(50);

}