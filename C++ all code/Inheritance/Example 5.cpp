#include<iostream>
using namespace std;

class  A {

 private :
     int x;

 public :

    void get(int a )
    {
        x=a;
    }
    void print()
    {
        cout<<x<<endl;
    }
};
class B
{
  protected :
   int y;

  public :

        void get_in(int b)
        {
            y=b;
        }

};

//class C : public A,public B
//{
  //  public :

    //void print()
     // {
       // cout<<"X number is : "<<x<<endl;
        //cout<<"Y number is : "<<y<<endl;
        //cout<<"print a and B :"<<x*y<<endl;

  //    }
//};

int main()
{
   // C obj;
    //obj.get(10);
    //obj.get_in(20);
    //obj.print();
    A obj2;
    obj2.get(20);
    obj2.print();


}
