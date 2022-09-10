#include<iostream>
using namespace std;

class student
{

 public :

         int id;
          int pass;

    student(int x,int y)
    {
               id=x;
               pass=y;
           cin>>id;
        cin>>pass;
    }

    void display()
    {
      for(int i=1;i<3;i++)
      {

        cout<<i<<".id : "<<id<<endl;
        cout<<i<<".pass :"<<pass<<endl;


      }
    }
    student()
    {
        cout<<"Died"<<endl;
    }



};


int main()
{
    student oke;
    oke.display();

    student obj;


}
