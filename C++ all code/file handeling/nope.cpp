#include<iostream>
using namespace std;
int main()
{
    int i,j,space,rows;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=rows-1;space++)
        {

                cout<<" ";
        }
         for(j=1;j<=2*i-1;j++)
        {

                cout<<" * ";
        }
         cout<<endl;
    }

    }
