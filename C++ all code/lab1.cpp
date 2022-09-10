#include<iostream>
using namespace std;



int main()
{
   int i;
   int n ;
   int a[100];
   cout<<"Entered the N value : ";
   cin>>n;
   cout<<"Entered the"<<"    "<<n<<"    " <<"Numbers:";


     for (i=0;i<n;i++)
     {

         cin>>a[i];

     }

     cout<<" ODD number is : "<<"          ";

     for(i=0 ;i<n;i++)
        {


     if (a[i]%2==1)
     {
         cout<<"      "<<a[i];
     }

        }

  cout<<"Even number is : "<<"            " ;

      for (i=0 ;i<n;i++)
      {
          if(a[i]%2==0)
      {

          cout<<"   " <<a[i]<<"  ";

      }


      }






}
