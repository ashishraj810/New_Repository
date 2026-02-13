//create a linked list using recursion(insertion at end)

#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

Node* CreateLinkedList(int arr[] , int index , int size )
{
  //Base Case
  if(index == size)
  return NULL;

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr , index+1 , size);

  return temp;
}

int main()
{
 Node* Head = NULL;

 int arr[] = {2,4,6,4,8,9};

 Head = CreateLinkedList(arr , 0 , 6);

 //Print the values
 Node *temp = Head;

 while(temp)
 {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
}