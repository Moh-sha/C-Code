#include<iostream>
using namespace std;

int main()
{
    int arr[5];


    for(int i=0;i<=5;i++)
   {

       cin>>arr[i];

   }

   //suppose the higest element is arr[0]=Max;

   int max_elemt=arr[0];
   for(int i=0;i<=5;i++)
   {
       if(arr[i]>max_elemt)
       {

           max_elemt=arr[i];

       }
   }

    cout<<"Max Element is : "<<max_elemt<<endl;



}
