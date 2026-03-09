//create a doubly linkedlist by recursion

#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* previous;
  // Node* back;

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
  int arr[] = {23 , 13 , 34 , 56 , 67 , 8 , 9 , 4};
  int size = sizeof(arr)/sizeof(arr[0]);

  Node* head = CreateDoublyLinkedList(arr , 0 , size , NULL);

  //print
  Node*print = head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }

}