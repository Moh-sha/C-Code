#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=1;
    long long int number;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        sum=sum*number;
    }

    cout<<sum;
}
