#include<iostream>
using namespace std ;

struct person {

  int id ;
  double cgpa;


};


void printf(struct person p)
{
    cout<<"Person 1 id : "<<p.id<<endl;
    cout<<"person 1 cgpa "<<p.cgpa<<endl;
}

void showbase(struct person p7)
{

cout<<"Enter  2 person the id "<<p7.id<<endl;

  cout<<"Enter  2 person the cgpa "<<p7.cgpa<<endl;


}

int main()

{
  struct person p1,p2;

  cout<<"Enter the cgpa "<<endl;
  cin>>p1.cgpa;
  cout<<"Enter the id " <<endl;
  cin>>p1.id;


  printf(p1);

  cout<<"Enter the cgpa "<<endl;
  cin>>p2.cgpa;
  cout<<"Enter the id " <<endl;
  cin>>p2.id;

  showbase(p2);
  return 0;

}
