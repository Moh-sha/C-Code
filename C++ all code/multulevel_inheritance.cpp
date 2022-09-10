#include<iostream>

using namespace std;
class a
{
    public :
      string word;

      void print()
      {
       cout<<"HA HA HA HAH HAH HA .............."<<endl;

      }


} ;

class b : public a
{
    public :
       string word2;

       void pharse()
       {
           cout<<"The is true that you are black " ;
       }




};

class c : public b
{
     public :
       string word3;

       void Ui()
       {
           cout<<"Entered the ui : "<<endl;
           cin>>word3;
           cout<<"The ui is : "<<word3<<endl;
       }


};
int main ()
{

    c o;
    o.Ui();
    o.pharse();
    o.print();

}
