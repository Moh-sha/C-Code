#include<iostream>

using namespace std;

class student
{
    public :
       int height;
       int width;

   void set_value(int x,int y)

   {
           height=x;
           width=y;
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

    obj[1].set_value(3,4);
    obj[2].set_value(5,7);
    obj[3].set_value(6,4);
    obj[4].set_value(6,5);
    obj[5].set_value(23,1);
     for(int i=1;i<5;i++)
     {
         cout<<i<<".area = "<<obj[i].area()<<endl;
     }
     }
