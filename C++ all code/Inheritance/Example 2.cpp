#include<iostream>

using namespace std;
class A{
    public :
        int x=20;
        int y=30;
        int c;
        int multi()
        {
            c=x*y;
           return c;

        }
        void ok()
        {
            cout<<"ok"<<endl;
        }

};
class B : public A
{
  public :
        void print()
    {
        int result=multi();
        cout<<"A and B multiple is :"<<result<<endl;
    }

};

int main()
{
    B b1;
    b1.print();
    b1.ok();
    b1.ok();
    A a1;
    a1.ok();
    //a1.print();
}
