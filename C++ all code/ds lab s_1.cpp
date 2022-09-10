#include<iostream>

using namespace std;

class Student{

 public :
     double arr[10];
     double gpa;

     void Scolership(double gpa)
     {
         cout<<"Entered the gpa : "<<endl;
         cin>>gpa;
         if(gpa>3.75)
         {
             cout<<"Eligable for scholership"<<endl;
         }
       else
        cout<<"Not eligible "<<endl;

     }

       void print()
       {
       for(int i=0;i<=10;i++)

            cout<<"gpa "<<i<<endl;
       }
};






int main()
{
    Student s1;
    s1.Scolership(gpa);
    s1.print();


}
