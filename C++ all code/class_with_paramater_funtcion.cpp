#include<iostream>

using namespace std;

class str{

  protected :

      int id;
      int cgpa;

  public :

    void display ()
    {
        cout<<"Id : "<<id<<endl;
        cout<<"cgpa : "<<cgpa<<endl;

    }

    void setvalue(int x,int y)
    {
        id=x;
        cgpa=y;

    }







};


int main()
{

   str  s;
   s.setvalue(20,30);
   s.display();


}
