#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int value)
{
    int first,last,middle;
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(value==arr[middle])
        {
            return middle;
        }
        else if(value<arr[middle])
        {
            last=middle-1;
        }
        else if(value>arr[middle])
        {
            first=middle+1;
        }
    }
    return -1;
}





int main ()
{
      int arr[]={10,20,30,15,45};
      int size=sizeof(arr)/sizeof(arr[0]);

    int index = binarySearch(arr,size,15);
   if(index>=0)
   {
       cout<<"Element found"<<endl<<index;

   }
else
{
    cout<<"Not found "<<endl;
}

 return 0;
}
