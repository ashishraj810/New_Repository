//Rotate a LinkedList from kth element from last

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

Node* createLinkedList(int arr[] , int size , int index)
{
  //base case
  if(index == size)
  return NULL;

  Node* temp = new Node(arr[index]);
  temp->next = createLinkedList(arr , size , index+1);

  return temp;
}

int main()
{
  int arr[] = {9 , 6 , 12 , 34 , 15 , 18};

  Node* head = NULL;
  head = createLinkedList(arr , 6 , 0);

  //count total nodes
  int count = 0;
  Node* tail = head;

  while(tail)
  {
    count++;
    tail = tail->next;
  }
  // cout<<count<<endl;
  int k;
  cout<<"Enter the value of k : ";
  cin>>k;
  count-=k;
  Node* current = head;
  Node* previous = NULL;

  k = k%count;
  //if k==0 , then no rotation needed.
  if(k == 0)
  return head;

  while(count--)
  {
    previous = current;
    current = current->next;
  }

  previous->next = NULL;

  Node* last = current;
  while(last->next!= NULL)
  {
    last = last->next;
  }

  last->next = head;
  head = current;

  //print
  Node* print = head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }

  // return head;
}