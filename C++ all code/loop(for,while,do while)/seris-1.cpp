#include<iostream>
using namespace std;
int main ()
{

    cout<<"1+2+3+4+5+6+_ _ _ _ _ n (for)"<<endl;
    int n;
    cout<<"Entered the number "<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"series is : "<<sum<<endl;

}
