#include<iostream>

using namespace std;

int main ()
{
    int temp;
    cout <<"Entered the today temperature : "<<endl;
    cin>>temp;

    if(temp<0)
    {
        cout<<"very cold ! "<<endl;
    }
    else if (temp>=0 && temp<=10 )
    {
        cout<<"Mediem cold "<<endl;
    }
     else if (temp>=10 && temp<=20 )
    {
        cout<<"Normal "<<endl;
    }
     else if (temp>=20 && temp<=30)
    {
        cout<<"very hot  "<<endl;

    }
    else
        cout<<"HOOOOOOOOT !"<<endl;



}
