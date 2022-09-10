#include<iostream>

using namespace std;

class car{
 public :
   string  name;
   string model;
   int car_no;
   car(string a,string b,int c);

};

car :: car(string a,string b,int c)
{
    name=a;
    model=b;
    car_no=c;

}

int main ()
{
     car c1("BMW","p203",123);
     car c2("woe","s000",23);

     cout<<c1.car_no<<c1.model<<c1.name;



}
