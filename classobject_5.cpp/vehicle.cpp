#include<iostream>
using namespace std;

class vehicle {
    private:
    int platenumber;

    public:
    int getnumber(int a) {
        // cout<<"enter the number of scooter";
        // cin>>platenumber;
        platenumber=a;
        return platenumber;
    }
};
int main() {
    vehicle scooter;
    scooter.getnumber(2435);
    
    return 0;
}