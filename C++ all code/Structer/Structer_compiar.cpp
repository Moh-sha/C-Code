#include<iostream>

using namespace std;

struct person {

 int id;
 float cgpa;
 string name;



};


int main ()
{

 struct person p1,p2;

  cout<<"Entered the p1 id : "<<endl;
  cin>>p1.id;


  cout<<"Entered the p1 name : "<<endl;
  cin>>p1.name;


  cout<<"Entered the  p1 cgpa : "<<endl;
  cin>>p1.cgpa;

  cout<<"Entered the p2 id : "<<endl;
  cin>>p2.id;


  cout<<"Entered the  p2 name : "<<endl;
  cin>>p2.name;


  cout<<"Entered the  p2 cgpa : "<<endl;
  cin>>p2.cgpa;



 if(p1.id==p2.id && p1.cgpa==p2.cgpa)
 {
     cout<<"same"<<endl;

 }
 else
    cout<<"not same"<<endl;








}

