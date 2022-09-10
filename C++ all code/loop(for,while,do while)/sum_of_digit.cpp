#include<iostream>

using namespace std;

int main ()
{
    int digit;
    int r;
    int sum=0;
    cout<<"Entered the Digit "<<endl;
    cin>>digit;
    int temp;
    temp=digit;
    while(temp!=0)
    {
       r=temp%10;
       sum=sum+r;
       temp=temp/10;

    }

    cout<<"Sum is : "<<sum;


}
