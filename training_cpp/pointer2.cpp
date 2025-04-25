#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node x,y,z;
    x.data=20;
    x.next=&y;

    y.data=30;
    y.next=&z;

    z.data=40;
    z.next=nullptr;

    Node *ptr=&y;
    cout<<ptr->data<<endl;  
    cout<<ptr->next<<endl;
    ptr=ptr->next;

    cout<<ptr->data<<endl;
    cout<<ptr->next<<endl; 
}