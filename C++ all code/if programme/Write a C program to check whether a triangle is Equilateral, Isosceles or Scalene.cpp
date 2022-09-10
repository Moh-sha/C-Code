#include<iostream>

using namespace std ;

int main ()
{
    int x1,x2,x3;

    cout<<"Entered the scale value ,x1,x2,x3 :"<<endl;
    cin>>x1>>x2>>x3;

    if(x1==x2 || x2==x3 || x1==x3 )
    {
        cout<<" Isoseles "<<endl;
    }
      else if (x1==x2 && x2=x3 )
      {
          cout<<"Equlateral "<<endl;
      }
     else
     {
         cout<< "Scalene "<<endl;
     }


     return 0;
}
