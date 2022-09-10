#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Entered  the number : "<<endl;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;

    }

    cout<<"series is : "<<sum<<endl;


}
