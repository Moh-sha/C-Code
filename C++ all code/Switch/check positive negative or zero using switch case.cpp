#include<iostream>

using namespace std;

int main ()
{
    int num ;
    cout <<"Entered the number : "<<endl;
    cin>>num;

    char ch;
    cout<<"Entered  value p or  n  : "<<endl;
    cin>>ch;




    switch(ch)
    {
        case 'p' :
           if(num>0)
           {
               cout<<"Positve "<<num<<endl;
           }
           else
            cout<<"Error ! "<<endl;
        break;
        case 'n' :
           if(num<0)
           {
               cout<<"Negative "<<num<<endl;
           }
           else
             cout<<"Error !"<<endl;

        break;


        default :
            cout<<"zero ! "<<endl;
    }



}

