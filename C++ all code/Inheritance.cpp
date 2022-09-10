#include<iostream>
using namespace std;

class person
{

   public :
        int id;
        double cgpa;
        string name;


};
class student :  public person {

 public :
     double gpa;

 void display_2()
 {
            cout<<"id : " <<id<<endl;
            cout<<"cgpa : "<<cgpa<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"gpa  : "<<gpa<<endl;

 }



};

int main ()
{
    student st;
    st.id=10;
    st.name="shafin";
    st.cgpa=10.41;
    st.gpa=3.23;


    st.display_2();

}

