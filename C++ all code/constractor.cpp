#include<iostream>

using namespace std;

class student
{
 public :
     int id;
     double cgpa;



  void display()
 {
     cout<<"ID : "<<id<<endl;
     cout<<"Cgpa : "<<cgpa<<endl;

 }
       //constructor
    student(int x ,double y)
    {
        id=x;
        cgpa=y;

    }
 print :
      student()
      {
          cout<<"Okke "<<endl;
      }
};


int main ()
{
    goto print;

    student a(30,3.5);
    a.display();
    student b(20,2.3);
    b.display();

    goto print;

    student s;

    return 0;

}
