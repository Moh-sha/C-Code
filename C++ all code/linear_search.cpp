#include<iostream>

using namespace std;

int main()
{

     int arr_input[]={1,5,6,7,4};
     int search_num;
     cin>>search_num;
     int check=0;
     int array_length=sizeof(arr_input)/sizeof(arr_input[0]);


 for(int i=0;i<array_length;i++)
 {
    if(arr_input[i]==search_num)
    {
        check=1;
        break;
    }

 }
  if(check==0)

   {
       cout<<"not found"<<endl;
   }
 else
    cout<<" found"<<endl;
}
