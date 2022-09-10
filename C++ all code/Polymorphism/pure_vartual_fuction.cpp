#include<iostream>
using namespace std;

class mobile_msg
{
      public :

      virtual void send_msg()=0;

};
class rahim : public mobile_msg
{
   public :

    void send_msg()
    {
        cout<<"hello i am karim ! "<<endl;
    }

};
class karin : public mobile_msg
{
    public :

    void send_msg()
    {
        cout<<"Hi this is rahim "<<endl;

    }


};

int main ()
{
    mobile_msg *m;
     rahim r;
     karin k;
    m=&r;
    m->send_msg();
    m=&k;
    m->send_msg();

    return 0;


}
