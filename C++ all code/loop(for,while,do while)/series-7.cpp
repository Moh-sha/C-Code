#include<iostream>
using namespace std;

int main()

{
    int n1;

    cout<<"1^2+2^2+3^2.......n1,n2 "<<endl;
    cout<<"Entered the value : "<<endl;
    cin>>n1;

    int i=1;
    int sum=0;
    while(i<=n1)
    {
        sum=sum+i*i;
        i++;

    }
    cout<<sum;
}

