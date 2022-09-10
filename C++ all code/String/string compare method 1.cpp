#include<iostream>
#include<cstring>N
using namespace std;

int main ()
{
    char c[]="ok";
    char c1[]="note ok";
    int value=strcmp(c1,c);
    if(value==0)
    {
        cout<<"True"<<endl;
    }
       else
        cout<<"false"<<endl;
}
