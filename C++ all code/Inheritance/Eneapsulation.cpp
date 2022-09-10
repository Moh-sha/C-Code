#include<iostream>

using namespace std;
class student
{
  private :
       string name;
  public :
     void set_value(string y)
     {

         name=y;
     }

    string print()
    {
        return name;
    }
};


int main ()
{
    student s1;
    s1.set_value("ramim");
    cout<<s1.print();
}
