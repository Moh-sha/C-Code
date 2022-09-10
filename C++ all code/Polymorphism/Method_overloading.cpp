#include<iostream>
using namespace std;
class student
{
    public :
    void function1(int x)
    {
        cout<<"function"<<endl;
    }
     void function1(int x,int y)
     {

        cout<<"function"<<endl;
     }
      void function1(int x,int y,int z)
   {

        cout<<"function"<<endl;
   }
       void function1(int x,int a,int p,int t)
        {

        cout<<"function"<<endl;
        }

        void function1(int x,int o,int l,int g,int q)
        {

        cout<<"function"<<endl;
        }



};
int main()
{
    student obj;
    obj.function1(10);
    obj.function1(10,20);
    obj.function1(10,30,2);
    obj.function1(10,3,5,7);
    obj.function1(10,5,7,9,0);










}
