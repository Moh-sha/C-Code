#include<iostream>

using namespace std;
class student
{
private :
    int x1;
    int y2;
public :

      void setvalueX(int x)
              {
                    x=x1;
              }
       void setvalueY(int y)
             {
                 y=y2;
             }
        int getvalueX()
        {
            return x1;
        }

       int getvalueY()

           {
               return y2;
           }


};

int main ()
{

    student s1;
    s1.setvalueX(10);
    s1.setvalueY(20);

    cout<<"value is :"<<s1.getvalueX();
    cout<<"value is s2 :"<<s1.getvalueY();




    return 0;


}
