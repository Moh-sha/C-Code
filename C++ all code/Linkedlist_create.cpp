#include<iostream>

using namespace std;

struct Node
{
     int data;
     Node *next_node;

};

 int main()
 {
      int n;
      Node *newNode, *current_node, *first_node;

      cout<<"Entered the number of node:"<<endl;
      cin>>n;

     for(int i=0; i<=n; i++)
     {
         int value;
         newNode=new(Node);

         cout<<"Entered the value "<<endl;
         cin>>value;

         newNode -> data=value;
         newNode ->next_node=NULL;


     }

     if(first_node==NULL)

    {

         first_node=newNode;
         current_node=newNode;

    }
    else
        {

        current_node->next_node =newNode;
        current_node=newNode;

    }


 }
