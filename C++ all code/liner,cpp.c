#include<iostream>

using namespace std;

int main()
{

    int arr[5]={1,5,6,7,4};
    int number;
    cout<<"Entered the number : "<<endl;
    cin>>number;
    for(int i=1;<=5;i++)
    {
        if(arr[i]==number)
        {
            cout<<"Found"<<endl;
        }
     else
     {
         cout<<"Not found"<<endl;
     }


    }






}
