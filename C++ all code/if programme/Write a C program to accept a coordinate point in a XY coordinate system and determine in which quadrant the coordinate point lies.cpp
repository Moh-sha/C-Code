#include<iostream>

using namespace std;

int main ()
{
    int co1;
    int co2;

    cout <<"Entered the cordinate number : "<<endl;
    cin>>co1>>co2;

    if (co1>0 && co2>0)
    {
        cout<<"cordinate is first "<<co1<<" "<<co2<<endl;
    }
    else if (co1<0 && co2>0)
    {
        cout<<"cordinate is second "<<co1<<" "<<co2<<endl;

    }
   else if (co1<0 && co2<0)
   {
       cout<<"cordinate is 3rd  "<<co1<<"  "<<co2<<endl;
   }
   else if (co1>0 && co2<0)
   {
        cout<<"cordinate is 4rd  "<<co1<<"  "<<co2<<endl;
   }
  else
  {
      cout<<"invaild"<<endl;
  }

  return 0;
}
