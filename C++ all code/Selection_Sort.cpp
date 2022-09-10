#include<iostream>

using namespace std;

void print_arry(int a[],int n )
{

for (int i=0;i<n;i++)
{

    cout<<a[i]<<"  ";
    cout<<endl;


}
}

void selection_sort(int a[],int n)

{     int mini,i,j;
     for(i=0;i++;i<n-1)
    {

        mini=i;

    for(j=1+i;j<n;j++)
    {
    if(a[j]<a[mini])

  {

      mini=j;
  }
      int temp=a[i];
      a[i]=a[mini];
      a[mini]=temp;
    }
    }

    }










int main()


{

    int a[5]={9,7,3,5,1};
    int size=sizeof(a)/sizeof(a[0]);

    cout<<"Unnsort____"<<endl;

    print_arry(a,size);

    selection_sort(a,size);

    cout<<"Sort"<<endl;

    print_arry(a,size);

    return 0;


}
