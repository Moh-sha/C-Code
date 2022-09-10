#include<iostream>

using namespace std;

int main()
{
    int x=10;
    int *p;
    p=&x;
    cout<<p<<endl;
    *p=20;
    cout<<*p<<endl;
    cout<<x<<endl;

   int *(*px)=&p;

    cout<<"px: "<<*(*px)<<endl;
    *(*px)=30;
    cout<<*(*px)<<endl;


}
