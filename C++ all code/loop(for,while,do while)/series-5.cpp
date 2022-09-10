#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"Even number "<<endl;
    cout<<"Entered the value : "<<endl;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
}
