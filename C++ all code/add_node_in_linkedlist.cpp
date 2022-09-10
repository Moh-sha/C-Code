#include<iostream>

using namespace std;

   struct node
    {
     int data;
    struct node*next;
    };

 struct node*append(struct node*head,int item)

   {
      struct node*new_node=create_node(int item,NULL)

     if(head==NULL)
        {
            return new_node;
        }

        struct node*current_node=head;

        while(current_node!=0)
           {
               current_node=current_node -> next;

           }

           current_node->next=new_node;


   }
  return head;






















int main()
{
    struct node*n;
    n=create_node(10,NUll);
    cout<<"Node is = "<<n->data;

    return 0;
}

