//Delete a node from starting of the linkedlist

#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;

  //constructor
  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

Node* CreateLinkedList(int arr[] , int index , int size)
{
  //Base Condition
  if(index == size)
  return NULL;

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr , index+1 , size);

  return temp;
}

int main()
{
  Node* Head = NULL;
  int arr[] = {12 , 34 , 45 , 56 , 67};

  Head = CreateLinkedList(arr , 0 , 5);



  //Deletion
  if(Head!=NULL)
  {
    Node* temp = Head;
    Head = Head->next;
    delete temp;
  }

  //print values
  Node* print = Head;
  while(print)
  {
  cout<<print->data<<endl;
  print = print->next;
  }
  
}