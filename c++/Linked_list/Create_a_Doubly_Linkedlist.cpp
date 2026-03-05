//Create a doubly linkedlist

#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next , *previous;

  //constructor
  Node(int value)
  {
    data = value;
    next = previous = NULL;
  }
};

int main()
{
  int arr[] = {2 , 8 , 9 , 34 , 43 , 83 , 90};
  Node *head = NULL;
  Node* tail = NULL;

  for(int i=0 ; i<7 ; i++)
  {
    if(head == NULL)
    {
      head = new Node(arr[i]);
      tail = head;
    }

    else
    {
      Node* temp = new Node(arr[i]);
      tail->next = temp;
      temp->previous = tail;
      tail = temp;

    }
  }

  //print
  Node* print = head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }
  

}