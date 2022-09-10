#include<iostream>

using namespace std;

 int fact(int n)
 {
     if(n==1)
        {
            return 1;
        }
     else
     {
         return n*fact(n-1);
     }

 }


 int main()

 {
     int x;
     cout<<"Entered the X :"<<endl;
     cin>>x;
     int result=fact(x);
     cout<<"Result : "<<result<<endl;
     return 0;
 }
