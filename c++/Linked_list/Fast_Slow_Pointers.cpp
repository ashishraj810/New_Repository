//Use fast and slow pointers to find middle of linked list

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

Node* createLinkedList(int arr[] , int index , int size)
{
  //base case
  if(index == size)
  return NULL;

  Node* temp = new Node(arr[index]);
  temp->next = createLinkedList(arr , index+1 , size);

  return temp;
}

int main()
{
  Node* Head = NULL;
  int arr[] = {45 , 3 , 12 , 67, 90 ,7 , 8};

  Head = createLinkedList(arr , 0 , 7);

  Node* Fast = Head;
  Node* Slow = Head;
  int i = 0;

  while( Fast && Fast->next )
  {
    Fast = Fast->next->next;
    Slow = Slow->next;
    i++;

  }

  cout<<"Index of middle element is :"<<i<<endl;
  cout<<"Element inside middle element is :"<<Slow->data<<endl;

  //print
  Node* print = Head;

  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }

}