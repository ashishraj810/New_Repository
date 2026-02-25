//Find the moddle of the given linkedlist

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

Node* createLinkedlist(int arr[] , int index , int size)
{
  //base condition
  if(index == size)
  return NULL;

  Node* temp = new Node(arr[index]);
  temp->next = createLinkedlist(arr , index+1 , size);
  
  return temp;
}

int main()
{
  Node* Head = NULL;
  int arr[] = {24 , 35 , 47 , 3 , 2 , 9 , 0};

  Head = createLinkedlist(arr , 0 , 7);

  int count = 0;
  Node* current = Head;

  while(current)
  {
    count++;
    current = current->next;
  }

  count/=2;
  current = Head;

  while(count--)
  {
    current = current->next;
  }

  cout<<current->data<<endl;

  //print
  Node* print = Head;
  while(print)
  {
  cout<<print->data<<endl;
  print = print->next;
  }
}