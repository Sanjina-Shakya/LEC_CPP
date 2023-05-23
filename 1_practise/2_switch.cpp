#include <iostream>

using namespace std;
  
int main()
{
    char x = 'A';
  
    switch (x) {
    case 'A':
        cout << "Choise is A";
        break;
    case 'B':
        cout << "Choise is B";
        break;
    case 'C':
        cout << "Choise is C";
        break;
    default:
        cout << "Choice other than A, B and C";
        break;
    }
    return 0;
}