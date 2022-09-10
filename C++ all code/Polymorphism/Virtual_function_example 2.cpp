#include<iostream>
using namespace std;

class poly
{
public :
    int height;
    int width;
     void setvalue(int a ,int b)
     {
         height=a;
         width=b;
     }
   virtual  int area()
    {
        return 0;
    }
};
class rect : public poly
{
public :
    int area()
    {
        return width*height;

    }

};
class tri : public poly
{
    int area()
    {
        return width*height/2;
    }

};

int main()
{
     poly p;
     rect r;
     tri t;
     poly *ptr=&p;
     poly *rtr=&r;
     poly *ttr=&t;


     ptr->setvalue(4,5);
    // rtr->setvalue(4,5);
     //ttr->setvalue(4,5);
     cout<<ptr->area()<<endl;
      //cout<<rtr->area()<<endl;
     //cout<<ttr->area()<<endl;





}
