#include<iostream>

using namespace std;

class base
{
   public :
       int a;
   int get()
   {
       return a;
   }
};
class derived : public base {

 public :
     int a;

     int get2()
     {
         return a+get();
     }



};



int main ()
{
    derived dr;
     dr.base :: a=6;
    dr.a=2;
    cout<<dr.get2();

}
