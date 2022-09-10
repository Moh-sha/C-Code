#include<iostream>
using namespace std;

int main()
{
    int arr[6]={5,4,4,3,6,8};
    cout<<"Number is : "<<endl;
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<endl;;

    }
    cout<<"Unique number is : "<<endl;

    for (int i=0; i<=5; i++)
    {
        int j;
        for (j=0; j<=i; j++)
           if (arr[i] == arr[j])
               break;
         if (i == j)
          cout << arr[i] << " ";
    }
    return 0;
}
