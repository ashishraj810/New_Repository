                 //Create a node in a linked list//

#include<iostream>
using namespace std;

   //Create a node class//
class node
{
    public:
    int data;
    node*next;
};

int main()
{
   node* head;
   head=new node();
   head->data=6;
   head->next=nullptr;
   cout<<head->data<<endl;
   cout<<head->next<<endl;
}