#include<iostream>

using namespace std;

int main ()
{   int a,b;
    int result;
    char ch;
    cout<<"Entered the a and b value : "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Entered the character + and  - and / and * " <<endl;
    cin>>ch;

    switch(ch)
    {
        case '+' :
        result=a+b;
        break;
        case '-' :
        result=a-b;
        break;
        case '*' :
        result=a*b;
        break;
        case '/' :
        result=a/b;
        break;


        default :
            cout<<"Error ! "<<endl;
    }

   cout<<"Result  :  "<<result;


}
