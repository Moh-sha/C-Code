#include<iostream>
using namespace std;
int main()
{
    int arr[21]= {0};
    int x;
    cout<<"Insert the value between -10 to 10 "<<endl;
    for(int i=0; i<20; i++)
    {
        cin>>x;
        if(x<0)
        {
            x=x*(-1);
            arr[x]++;
        }
        else
        {
            x=x+10;
            arr[x]++;
        }
    }
    for(int i=10; i>0; i--)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout<<i*(-1)<<" ";
        }
    }
    for(int i=11; i<=20; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout<<i-10<<" ";
        }
    }
    cout<<endl;
}
