#include<iostream>

using namespace std;
class student
{
  int height;
  int wideth;
  int area;

  public :
  void set_value()
  {


      cin>>height>>wideth;


  }

void counting()
{
    area=height/wideth;
}
 void display()
 {
       cout<<"area = "<<area<<endl;
 }

};
int main()
{

    student obj;
    obj.set_value();
    obj.counting();
    obj.display();


}
