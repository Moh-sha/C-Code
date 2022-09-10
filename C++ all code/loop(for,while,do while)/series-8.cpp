#include<iostream>
using namespace std;

int main()

{
    int n1;

    cout<<"1^2+2^2+3^2.......n1,n2 "<<endl;
    cout<<"Entered the value : "<<endl;
    cin>>n1;

    int i=1;
    int res=1;
    for(i=1;i<=n1;i++)
    {
        res=res*(i*i);
     }
    cout<<res;
}
