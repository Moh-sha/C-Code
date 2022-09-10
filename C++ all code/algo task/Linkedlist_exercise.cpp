#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *nextNode;

};
       Node *newNode;
       Node *currentNode;
       Node *firstNode;

       void printlinked_list()
       {
           currentNode=firstNode;
           while(currentNode!=NULL)
           {
               cout<<currentNode->data<<endl;
               currentNode=currentNode->nextNode;


           }


       }
       bool search_element()
       {
           int element;
           int flag;
           count<<"Entered the element"<<endl;
           cin>>element;
           currentNode=firstNode;

           while(currentNode!=NULL)
           {
               if(currentNode->data==element)
               {
                   cout<<"found";
                   flag=true;
                   break;

               }
               else
               {
                   currentNode=currentNode->nextNode;

               }


           }

           if(frag==false)
           {

               cout<<"Not found"<<endl;

           }



       }
int main()
{      int n;
       Node *newNode;
       Node *currentNode;
       Node *firstNode;
       cout<<"N : "<<endl;
       cin>>n;
       for(int i=0;i<n;i++)
        {
            int value;
           cout<<"value :";
           cin>>value;
           newNode= new(Node);
           newNode->data=value;
           newNode->nextNode=NULL;
           if(firstNode==NULL)
            {
                firstNode=newNode;
                currentNode=newNode;

            }
            else
            {
                currentNode->nextNode=newNode;
                currentNode=newNode;


            }

            }

       cout<<"linkedlist : "<<endl;
       printlinked_list();















}
