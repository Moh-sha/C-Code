#include<iostream>
using namespace std;

class rect{
public :
    int x;
    int y;
    int c;

    void set_value()
    {
        cout<<"Entered the value x and y : "<<endl;
        cin>>x;
        cin>>y;
    }
    int get()
    {

        return x*y/2;
    }


};

class B : public rect
{
    public :
    void display()
    {
        int result = x*y/2;
        cout<<result<<endl;
    }

};
int main ()
{
    B b1;
    b1.set_value();
    b1.get();
    b1.display();
}
