#include<iostream>

using namespace std;

class common
{
  public :

       string name ;
       string gender ;
       int age;

  void get()
  {
      cout<<"Data input "<<endl;

      cout<<"Entered the age : " <<endl;
      cin>>age;
      cout<<"Entered the name : "<<endl;
      cin>>name;
      cout<<"Entered the gender : "<<endl;
      cin>>gender;

  }
     void print()
     {
         cout<<"****************************"<<endl;
        cout<<"Gender is : "<<gender<<endl;
         cout<<"Name is :  " <<name<<endl;
         cout<<"Age is  : " <<age<<endl;
     }





};

 class principle : public common
 {
     public :
         int salary ;
         void get2()
         {
      cout<<"Data input of principle "<<endl;

      cout<<"Entered the salary : " <<endl;
      cin>>salary;

         }

     void printf()
     {
          cout<<"_____________________"<<endl;
          cout<<"salary is : " <<salary<<endl;
     }


 };

class student : public common
{
  public :

     int id;
     void get3()
     {
         cout<<"Entered the id : "<<endl;
         cin>>id;
     }

    void print2()
    {
        cout<<"ID is :"  <<id<<endl;
    }

};






int main ()
{

          student st;
          st.get3();
          st.print2();
          st.get();
          st.print();
          principle s1;
          s1.get2();
          s1.printf();

          return 0 ;







}
