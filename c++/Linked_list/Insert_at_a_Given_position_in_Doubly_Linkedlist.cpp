//Insert  a node at a given position in a given linkedlist

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

Node* CreateDoublyLinkedList(int arr[] , int index , int size , Node* back)
{
  //base case
  if(index == size)
  return NULL;

  Node* temp = new Node(arr[index]);
  temp->previous = back;
  temp->next = CreateDoublyLinkedList(arr , index+1 , size , temp);
  return temp;
}

int main()
{
  int arr[] = {3 , 4 , 6 , 7 , 12 , 13 , 23};
  int n;     //n denotes the position after which the new node is to be added
  cout<<"enter the value of n: ";
  cin>>n;

  Node* head = CreateDoublyLinkedList(arr , 0 , 7 , NULL);

  //start me add krna hoga
  if(n==0)
  {
    //linkedlist exist hi nhi kar rha ho
    if(head == NULL)
    {
      Node* temp = new Node(5);

    }
    ////linkedlist exists
    else
    {
      Node* temp = new Node(5);
      temp->next = head;
      head->previous = temp;
      head = temp;

    }
  }

  else
  {
    //end me add krna hoga
      Node* current = head;

      //current pointer ko n wale position pe le jana h
      while(--n)
      {
        current = current->next;
      }

      if(current->next == NULL)   //then this is the last node
      {
        Node* temp = new Node(5);
        temp->previous = current;
        current->next = temp;
      }

      
    //linkedlist ke mid me kahi add krna hoga
      else
      {
        Node* temp = new Node(5);
        temp->previous = current;
        temp->next = current->next;
        current->next->previous = temp;
        current->next = temp; 
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