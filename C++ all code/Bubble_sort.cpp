#include<iostream>

using namespace std;

void print_arry(int arr[],int n )
{

for (int i=0;i<n;i++)
{

    cout<<arr[i]<<"  ";
    cout<<endl;

}
}
void Bubble_sort(int arr[],int n)

{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
    {
         if(arr[j]>arr[j+1])
         {
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;


         }

        cout<<"========================================"<<endl;


    }



}


int main()


{

    int arr[5]={9,7,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Unnsort____"<<endl;

    print_arry(arr,size);

    Bubble_sort(arr,size);

    cout<<"Sort"<<endl;

    print_arry(arr,size);

    return 0;














}

