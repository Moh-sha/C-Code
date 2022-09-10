#include<iostream>

using namespace std;

int fact (int n )

{
     if(n==1)
   {
        return 1 ;
   }
    else
        return n* fact (n-1);

}


int main ()
{
    int fabbo =  fact(3);
    cout<<"result is : " <<fabbo<<endl;

    return 0;

}
