#include<iostream>
using namespace std;

int main()
{
     int i=0;

     int number1;


     cout<<"Entered the last number "<<endl;
     cin>>number1;
    while(i<number1)
    {
        if(i%2==0)
        {
            cout<<"even number"<<endl;
        }
     else if(i%2!=0)
        {
           cout<<"odd number "<<endl;
        }

            i++;
    }




}
