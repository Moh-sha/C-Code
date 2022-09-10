#include<iostream>

using namespace std;

int main()
{
    int number=1000;
    int sum=0;
    for (int i=0;i<number;i++)
    {
        if(i%3==0)
          {
              sum=sum+i;
          }
        else if(i%5==0)
        {
            sum=sum+i;
        }
    }

     cout<<"sum ="<<sum<<endl;

     return 0;


}
