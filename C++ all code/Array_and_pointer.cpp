#include<iostream>
using namespace std;
int main()
{

    int arr[]={20,30,41,22,33,44,55};
    for(int i=0;i<=6;i++)
    {
        cout<<arr[i]<<endl;
    }
    int *p;
    p=arr;
    cout<<"Pointer   :"<<*p<<endl;
    cout<<"pointer 1 :"<<*(p+1)<<endl;
    cout<<"pointer 2 :"<<*(p+2)<<endl;
    cout<<"pointer 2 :"<<*(p+3)<<endl;
    cout<<"pointer 2 :"<<*(p+4)<<endl;
    cout<<"pointer 2 :"<<*(p+5)<<endl;
    cout<<"pointer 2 :"<<*(p+6)<<endl;

    cout<<"1st :"<<(*p++)<<endl;
    cout<<"2nd :"<<(*p++)<<endl;

    cout<<"3rd :"<<(*p++)<<endl;
    cout<<"4th :"<<(*p++)<<endl;
    cout<<"5th :"<<(*p++)<<endl;
}
