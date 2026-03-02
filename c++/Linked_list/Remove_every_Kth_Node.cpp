// Remove every kth node from given linked list.

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
  int arr[] = {3 , 5 , 1 , 8 , 9 , 10 ,45 ,23};

  Node* Head = NULL;
  Head = CreateLinkedList(arr , 0 , 8);
  int k;
  cout<<"Enter the value of k : "<<endl;
  cin>>k;
  int count = 1;

  Node* present = Head;
  Node* previous = NULL;

  if(k == 1)
  {
    while(Head)
    {
      Node* ok = Head;
      Head = Head->next;
      delete ok;
    }
    return 0;
  }
  
  while(present)
  {
    if(count == k)
    {
      previous->next = present->next;
      delete present;
      present = previous->next;
      count = 1;
    }

    else
    {
      previous = present;
      present = present->next;
      count++;
    }
  }

  //print
  Node* print = Head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }
}