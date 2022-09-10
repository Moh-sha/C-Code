 #include<iostream>

 using namespace std ;

 struct person
 {
     int id;
     float cgpa;
     string name;


  void print()
  {
    cout<<"person1 id"<<id<<endl;
    cout<<"person1 cgpa"<<cgpa<<endl;
    cout<<"person1 name"<<name<<endl;

  }

 };




   int main ()

   {
       struct person p1;

       struct person p2;


       p1.id=2000;
       p1.cgpa=2.5;
       p1.name="shafin";

        p1.print();

   }
