//Insert a node at start of the linkedlist

#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* previous;


  //constructor
  Node(int value)
  {
    data = value;
    next = previous = NULL;
  }
};

int main()
{
  int arr[] = {7 , 5 , 9 , 4 , 56 , 67 , 45 , 56};

  Node* head = NULL;
  Node* tail = NULL;

  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0 ; i<size ; i++)
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

  //insert a node at start 
  if(head == NULL)
  {
    head = new Node(87);
    tail = head;
  }
  else
  {
    Node* current = new Node(87);
    current->next = head;
    head->previous = current;
    head = current;
  }

  //print
  Node* print = head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }

}