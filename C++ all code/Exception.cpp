#include<iostream>

using namespace std;



int main ()
{

    try
    {
        throw 10;
        throw 'c';

    }

    catch(char x)
    {
        cout<<"Catch is char " <<endl;

    }
    catch(int x)
    {
        cout<<"catch is int"<<endl;
    }
    catch(...)
   {
       cout<<"catch is default"<<endl;
   }

    return 0;

}
