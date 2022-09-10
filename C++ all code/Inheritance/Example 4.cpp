#include<iostream>
using namespace std;
class A {

  public :
  A()
  {
      cout<<"A is a constructor "<<endl;
  }
};
class B : public A {

      public :
       B()
       {
           cout<<"B is a constructor "<<endl;
       }
};
class C : public B
{
    public :
      C(){
    cout<<"C is a constructor "<<endl;
      }
};

int main()
{

    C obj;
    B obj1;
    A objc;

}
