#include <iostream>
using namespace std;

class Base
{
public:
  int sum;

    Base (int x = 6,int y = 8)		
  {
    sum = x + y;
  }

  void show ()
  {
    cout << "sum of numbers =" << sum << endl;
  }
};

int main ()
{

  Base b;
  b.show ();
  return 0;
}