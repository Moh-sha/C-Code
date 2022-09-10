#include<iostream>

using namespace std;



int main ()
{
    try{

       try
       {
           throw 10;
       }
      catch(int n)
   {
        cout<<"catch 1"<<endl;
         throw n;
   }
    }

   catch (int n)
   {
    cout<<"catch 2 " <<endl;

   }
    return 0;

}



