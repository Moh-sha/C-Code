#include<iostream>
using namespace std;

int main()
{
    int num;
    int i;

    cout<<"Entered the number : "<<endl;
    cin>>num;

    for(i=1;i<=10;i++)
   {
       int multi= num*i;
       cout<<multi<<endl;
   }


 return 0;
 }
