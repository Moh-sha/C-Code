#include<iostream>
using namespace std;
int main ()
{

    int num;
    cout<<"Entered the number : "<<endl;
    cin>>num;

    int i;
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            cout<<"Even nnumber :  " <<i<<endl;
        }
        else if(i%2!=0)
        cout<<"Odd number : "<<i<<endl;

    }

    return 0;


}
