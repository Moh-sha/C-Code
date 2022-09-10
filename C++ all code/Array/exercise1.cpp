#include<iostream>
using namespace std;

int main()
{

    int arr[5];


    arr[0]=20;
    arr[1]=10;
    arr[2]=6;
    arr[3]=8;
    arr[4]=12;
    arr[5]=15;

    cout<<"Array is : "<<endl;

    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<endl;

    }

    cout<<"next array"<<endl;

    int ar[5];

    cout<<"Enter the array element : "<<endl;


    for(int i=0;i<=5;i++)
    {
        cin>>ar[i];

    }
    cout<<"Answer this array : "<<endl;

    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<endl;
    }

}
