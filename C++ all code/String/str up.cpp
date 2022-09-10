#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[]="hello";
    strupr(c);
    cout<<c<<endl;
    strlwr(c);
    cout<<c;
}
