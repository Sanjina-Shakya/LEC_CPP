#include<iostream>
using namespace std;

class scaler
{
    static int number;
    public:
        static void get_no_of_topics()
        {
            cout << "The number of topics already assigned: "
            << number << endl;
        }
};
int scaler::number=25;

int main()
{
    scaler S;
    S.get_no_of_topics();
    return 0;
}