#include<iostream>
using namespace std;

int main()
{
     int num1,num2,r;
     int gcd;
     cin>>num1>>num2;

     while(num2!=0)
     {
         r=num1%num2;
         num1=num2;
         num2=r;


     }

      gcd=num1;

       int lcm= (num1*num2)/gcd;
       cout<<"LCM : "<<lcm<<endl;
       cout<<"GCD : "<<gcd<<endl;


}
