#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *px=&x;
    int *px2;
    px2=px;
   *px2=20;
    cout<<*px2;


}
