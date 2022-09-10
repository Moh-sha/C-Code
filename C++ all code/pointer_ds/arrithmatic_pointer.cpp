#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int *px;
    px=&x;
    cout<<&x<<endl;
    cout<<*(px)<<endl;

    ++(*px);
    cout<<*(px)<<endl;
    cout<<&x<<endl;
    cout<<sizeof(px)<<endl;



}
