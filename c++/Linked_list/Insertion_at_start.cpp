#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=Null;
    }

};

int main()
{
    Node *Head;
    Head=new Node(7);

    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

    return 0;

}