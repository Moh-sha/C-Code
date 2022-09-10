#include<iostream>

using namespace std;
int main ()
{
    cout<<"1*2+2*3+3*4+4*5+_ _ _ _ _ n1,n2"<<endl;
    int n1;
    int n2;
    cout<<"Entered the n1="<<endl;
    cin>>n1;
    cout<<"Entered the n2="<<endl;
    cin>>n2;

    int i=1;
    int j=2;
    int sum=0;
    while(i<=n1 && j<=n2)
    {
        sum=sum+i*j;
        i++;
        j++;

    }

     cout<<"Series is : "<<sum<<endl;
    return 0;


}
