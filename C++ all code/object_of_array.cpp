#include<iostream>

using namespace std;

class student
{
    public :
       int height;
       int width;

   void set_value()

   {
           cin>>height>>width;

   }
    int area()
    {
       int area=height*width;
        return area;

    }
};

int main()
{
    student obj[5];

    obj[1].set_value();
    obj[2].set_value();
    obj[3].set_value();
    obj[4].set_value();
    obj[5].set_value();
     for(int i=1;i<5;i++)
     {
         cout<<i<<".area = "<<obj[i].area()<<endl;
     }
     }
