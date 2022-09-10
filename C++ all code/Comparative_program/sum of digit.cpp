#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int temp=num;
    int n;
    cin>>n;
    int r;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }

    cout<<sum;


}
