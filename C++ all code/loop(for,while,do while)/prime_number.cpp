#include<iostream>

using namespace std;

int main()
{

    int i=0;
    int cnt=0;
    int num;
    cout<<"Entered the number : "<<endl;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        if(num%i==0)
        {
            cnt++;
            break;
        }

    }

        if(cnt==0)
        {
            cout<<"prime number "<<endl;
        }
        else
            cout<<"Not prime number "<<endl;



}
