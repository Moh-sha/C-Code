#include<iostream>

using namespace std ;

class person
{
private  :

    int number;
    int roll;
public :
    void set_value()
    {
        cin>>number;
        cin>>roll;

    }
   void printf()
   {
       cout<<"number"<<number<<endl;
       cout<<"roll"<<roll<<endl;

   }

};
class student : public person {

       void all()
          {
           set_value();

           printf();
          }

};

int main ()
{
    student ob;
    ob.set_value();
    ob.printf();

    return 0;
}

