#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{

    int arr[5]={3,6,1,2,8};

    cout<<"before : "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    sort(arr,arr+5);
    cout<<"after : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}
