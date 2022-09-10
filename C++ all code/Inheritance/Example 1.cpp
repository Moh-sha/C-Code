#include<iostream>
using namespace std;

class animal
{
   public :
       void get()
       {
       cout<<"anime is boking :"<<endl;
       }

};
class dog : public animal
{
    public :
    void alpa()
    {
        cout<<"dog is boking "<<endl;
    }


};


int main()
{
       dog a1;
       a1.get();
       a1.alpa();

       animal a2;
       a2.get();

}
