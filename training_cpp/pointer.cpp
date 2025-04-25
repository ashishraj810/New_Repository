#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node a,b,c;
    a.data=20;
    a.next=&b;

    b.data=30;
    b.next=&c;

    c.data=40;
    c.next=nullptr;

    Node *ptr=&a;
    cout<<ptr->data<<endl;  
    cout<<ptr->next<<endl;
    ptr=ptr->next;

    cout<<ptr->data<<endl;
    cout<<ptr->next<<endl; 
}