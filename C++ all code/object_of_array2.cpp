#include<iostream>

using namespace std;
class student
{
  int height;
  int wideth;

  public :
  void set_value(int a,int b)
  {
      a=height;
      b=wideth;
      int area=height*wideth;
     cout<<"area"<<area<<endl;
  }


 void display(int area)
 {
       cout<<"area"<<area<<endl;
 }

};


int main()
{
    student obj[3];
    obj[0].set_value(3,6);
    obj[1].set_value(3,5);
    obj[2].set_value(2,10);
    obj[3].set_value(4,1);

    for(int i=0;i<3;i++)
    {
        cout<<i<<"="<<obj[i].display()<<endl;
    }

}
