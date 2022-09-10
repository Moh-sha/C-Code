#include<iostream>

using namespace std;

class vechicle
{
public :

    vechicle()
    {
        cout<<"This is vechicle "<<endl;
    }
};
class bus : public vechicle
{
public :
    bus()
    {
        cout<<"This is bus "<<endl;
    }


};
class track : public bus
{
public :
    track(){
    cout<<"This is track "<<endl;
    }
};

int main()
{
    track t;


}
