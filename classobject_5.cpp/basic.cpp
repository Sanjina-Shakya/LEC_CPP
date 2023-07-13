#include<iostream>
using namespace std;
 
class sathiharu {
    public: 
        string name;
        string addresss;
        int age;
 
    public:
        sathiharu(string naam,string addr,int umer)
        {
            cout<<"constructor print bhayo ta?"<<endl;
            
        }
        void ghumeprogram() {
            cout<<"Oi Espali ghumna jaam bujhis "<<name<<" umm "
            <<age<<"ko umer ma hike garna sakinchha masta. ka jane hola ta "
            <<addresss<<" jada thik hola?";
}
};
 
int main() {
    sathiharu firstfriend("pritika","lubhoo",12), secondfriend("priyanka","buddhanagar",12);
    //firstfriend.name = "Lijala";
    //firstfriend.age = 20;
    //firstfriend.addresss = "Champadevi";
    //firstfriend.ghumeprogram();
 
    //secondfriend.name = "Pritika";
    //secondfriend.age = 19;
    //secondfriend.addresss = "Taare bhir";
    //secondfriend.ghumeprogram();
 
};