#include<iostream>
using namespace std;

class Date
{
public:
   Date( int mn, int dy, int yr );
   int getMonth() const;  
   void setMonth( int mn ); 
private:
   int month;
};

int Date::getMonth() const
{
   return month;
}
void Date::setMonth( int mn )
{
   month = mn;   
}
int main()
{
   Date MyDate( 7, 4, 1998 );
   const Date BirthDate( 1, 18, 1953 );
   MyDate.setMonth( 4 );
   BirthDate.getMonth();

}