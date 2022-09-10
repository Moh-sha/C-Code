#include<iostream>
using namespace std;

class Mystack
{
    int top=0;
    int maxsize=5;
    int stack_1[5];

  public :
    bool isFull()
    {
       if(top==maxsize)
         {
             return true;
         }
            return false;
    }
    bool isEmpty()
    {
        if(top==0)
        {
            return true;

        }
        return false;
    }

    void push_(int value)
    {
        if(isFull())
        {
            cout<<"Stack is full"<<endl;
        }
     else
     {
         stack_1[top]=value;
         top++;
     }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
       else
       {
           top--;
       }
    }
 void print()
 {
     for(int i=top-1;i>=0;i--)
     {
         cout<<stack_1[i]<<endl;
     }
 }

};

int main()
{
    Mystack ms;
    //ms.print();
    //ms.pop();
     ms.push_(10);
     ms.push_(5);
     ms.push_(3);
     ms.push_(5);
     ms.push_(1);
     //ms.print();
     ms.push_(2);
     ms.push_(9);
     ms.print();

}


