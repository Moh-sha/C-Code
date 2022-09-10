#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int i=1;
    int count =0;

    cout<<"Write a program in C++ to find prime number within a range : "<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

    cout<<"Entered the last number : "<<endl;
    cin>>num2;


   while(i<num2)
   {
       if(num1%i==0)
       {
           count ++;
       }
     i++;
   }
   if(count==2)
   {
       cout<<"Number is prime "<<endl;

   }
   else
    cout <<"Not prime number "<<endl;


}
