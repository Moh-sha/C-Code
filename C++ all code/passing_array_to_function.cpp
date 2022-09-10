#include<iostream>
using namespace std;

void fun(int number[],int sizeofarr)
{
    for(int i=0;i<=5;i++)
    {
        cout<<number[i]<<endl;

    }

}

int main ()
{

  int number [5] ={2,3,4,5,70};

   fun(number,5);

  return 0;

}
