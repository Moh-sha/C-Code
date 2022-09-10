#include<iostream>
using namespace std;
int main ()
{
    int num1;
    int num2;
    int count=0;
    cout<<"The range value number "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Entered the first number : "<<endl;
    cin>>num1;
    cout<<"Entered the last number : "<<endl;
    cin>>num2;
    for(int i=num1;i<=num2;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }

      if(count==0)
      {
          cout<<"Prime number " <<j<<endl;

      }
     else
        cout<<" not Prime number :"<<j<<endl;

        }
    }









}
