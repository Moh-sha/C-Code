#include<iostream>
using namespace std;

int main ()
{
    int x=10;
    cout<<"x = "<<*(&x)<<endl;
    int *px;

    px=&x;

    cout<<*px<<endl;

    cout<<&px<<endl;

    cout<<px<<endl;






}
