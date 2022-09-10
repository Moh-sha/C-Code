#include<iostream>

using namespace std ;

class person
{
public :

    int number;
    int roll;



};
class student : public person {

public :

  void get()
  {
      cout<<"Entered the number : " <<endl;

      cin>>number>>roll;
  }

 void printf()
 {

     cout<<"number "<<number<<endl;
     cout<<"roll  "<<roll<<endl;

 }

};

int main ()
{
    student ob;
    ob.get();
    ob.printf();

    return 0;
}
