#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && c<b)
    {
        cout<<b<<"eh o maior"<<endl;
    }
    else if (a<c && b<c)
      {
          cout<<c<<"eh o maior"<<endl;
      }
    else
        cout<<a<<"eh o maior"<<endl;



    return 0;


}
