#include<iostream>
using namespace std;

int main()
{
    bool found;

    int value;
    cout<<"Entered the value "<<endl;
    cin>>value;
    int arr[5]={10,20,30,40,50};
    int i;
    for(i=0;i<=5;i++)
    {
        if(arr[i]==value)
        {
            found=true;
            cout<<"Found !"<<endl;
            break;
        }
        else
        {found=false;

        if(found==false)
        {
            cout<<"Not found"<<endl;
            break;
        }

    }
}
