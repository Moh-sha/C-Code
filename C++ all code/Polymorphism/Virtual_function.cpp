#include<iostream>
using namespace std;

class sound {

public :
      virtual void print()
       {
           cout<<"Your sound "<<endl;

       }


};

class dog : public sound
{
public :
    void print()
    {
        cout<<"dog sound "<<endl;

    }

};
class cat : public sound
{
    void print()
    {
        cout<<"cat sound "<<endl;
    }

};



int main ()
{
     sound sob;
     cat cob;
     dog dob;
     sound *ptr;
     ptr=&cob;
     ptr->print();
     ptr=&dob;
     ptr->print();

}
