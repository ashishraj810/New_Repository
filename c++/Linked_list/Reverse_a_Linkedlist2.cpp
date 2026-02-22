#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;

  //constructor
  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

Node* CreateLinkedList(int arr[] , int index , int size)
{
  //base case
  if(index == size)
  return NULL;

  Node* temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr , index+1 , size);

  return temp;
}

int main()
{
  Node* Head = NULL;
  int arr[] = {23 , 12 , 24 , 26 , 46 , 57 , 9};

  Head = CreateLinkedList(arr , 0 , 7);

  Node* current = Head;
  Node* previous = NULL;
  Node* future = NULL;

  while(current)
  {
    future = current->next;
    current->next = previous;
    previous = current;
    current = future;
    
  }
  Head = previous;

  //print
  Node* print = Head;

  while(print)
  {
  cout<<print->data<<endl;
  print = print->next;
  }

}