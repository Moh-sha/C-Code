#include<iostream>

using namespace std;

int main ()
{

    int a;
    cout<<"Entered  value a  : "<<endl;
    cin>>a;




    switch(a)
    {
        case 1 :
           cout<<"Sunday"<<endl;
        break;

        case 2 :

             cout<<"Monday"<<endl;

        break;

        case 3 :

             cout<<"Tuesday"<<endl;

        break;
         case 4 :

             cout<<"Wed day"<<endl;

        break;
               case 5 :

             cout<<"Thus day "<<endl;

        break;
               case 6 :

             cout<<"Friday "<<endl;

        break;
                case 7 :

             cout<<"Sat day "<<endl;

        break;



        default :
            cout<<"Error  ! "<<endl;
    }



}

