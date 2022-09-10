#include<iostream>

using namespace std;

void print_arry(int ar[],int n )
{

for (int i=0;i<n;i++)
{

    cout<<ar[i]<<"  ";
    cout<<endl;

}

}
void insertion(int arr[],int size)
{
    int i,j,temp;

        for(i=1;i<size;i++)
        {
            arr[i]=temp;
            j=i-1;
            while(j>=0 && arr[j]>temp)

            {
                arr[j+1]=arr[j];
                j--;
            }

             arr[j+1]=temp;

        }
      print_arry(arr,size);

}


int main()


{

    int arr[5]={9,7,3,5,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"unsort"<<endl;

    print_arry(arr,size);
    cout<<"Insertion"<<endl;
    insertion(arr,size);
    print_arry(arr,size);

    return 0;













}
