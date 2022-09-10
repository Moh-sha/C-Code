#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<=5;i++)
    {
        cin>>arr[i];

    }

    int f,s,t;
    f=arr[0];
    s=arr[0];
    t=arr[0];

    for(int i=0;i<=5;i++)
    {
        if(arr[i]>f)
        {
            t=s;
            s=f;
            f=arr[i];

        }
       else if (arr[i]>s)
        {
            t=s;
            s=arr[i];
        }
      else if (arr[i]>t)
     {
         t=arr[i];
     }

    }

     cout<<"first :"<<f<<endl;
     cout<<"secend :"<<s<<endl;
     cout<<"thried : "<<t<<endl;
}
