#include<iostream>
#include<string.h>
using namespace std;

class student_class
{
    int roll_number;
    char name[20];
    char gender;
    int age;
    int stder;
   public  :
            void get_Data()
            {


              cout<<"Roll Number  : ";
              cin>>roll_number;
              cout<<"Name         : ";
              cin>>name;
              cout<<"Gender       : ";
              cin>>gender;
              cout<<"Age          : ";
              cin>>age;
              cout<<"Staddard     : ";
              cin>>stder;

            }

    public :

          void show_Data()
          {
              cout<<"________Student details______"<<endl;
              cout<<"Roll Number  : "<<roll_number<<endl;
              cout<<"Name         : "<<name<<endl;
              cout<<"Gender       : "<<gender<<endl;
              cout<<"Age          : "<<age<<endl;
              cout<<"Staddard     : "<<stder<<endl;
          }



};



int main()
{
    student_class obj;

    obj.get_Data();
      obj.show_Data();



}
