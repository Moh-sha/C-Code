#include<iostream>

using namespace std ;

class dad {
       int height;
       string colr;

  public :



       void get_()
       {    cout<<"Entered dad height and colr"<<endl;
           cin>>height;
           cin>>colr;
       }

       void printf()
       {
           cout<<"Dad height is : "<<height<<endl;
           cout<<"Dad colr is : "<<colr<<endl;
       }


};

class mom
{
    int cgpa;
     int id;

   public :

       void get2_()
      {
          cout<<"Entered mom Cgpa and ID : "<<endl;
          cin>>cgpa;
           cin>>id;

        cout<<"cgpa  "<<cgpa<<endl;
        cout<<"id"<<id<<endl;
       }

};

class child : public dad , public mom {

public :
    void all()
    {
        get_();
        get2_();
        printf();
    }



};

int main ()
{
    dad ch;
    ch.get_();
    ch.printf();


}
