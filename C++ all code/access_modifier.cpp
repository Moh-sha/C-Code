#include<iostream>

using namespace std;
class  Acess {

private :
    int id=20;
    string name="shafin";

public :


    void display()
    {
        cout<<"id  : "<<id<<endl;
        cout<<"Name : "<<name<<endl;

    }

};
int main ()

{
     Acess ac;

    ac.display();

}
