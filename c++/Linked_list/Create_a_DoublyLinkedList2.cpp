//Create a Doubly LinkedList such that every new element added to the list must be added to the start of the list

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
  temp->previous = CreateDoublyLinkedList(arr , index+1 , size , back);
  temp->next = back;
}
int main()
{
  int arr[] = {23 , 12 , 34 , 3 , 5 , 2 , 98 , 17};

  Node* head = NULL;
  head = CreateDoublyLinkedList(arr , 0 , 8 , NULL);

  //print
  Node* print = head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }

}