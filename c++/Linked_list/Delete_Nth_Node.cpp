//Delete Nth Node from last.

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
  int arr[] = {2 , 4 , 35 , 56 , 47 , 38, 58};
  int Nth_Node = 0;    //provide(input) Nth node from last
  Node* Head = NULL;

  Head = CreateLinkedList(arr , 0 , 7);

  //count the number of elements in linkedlist
  int count = 0;
  Node* size = Head;
  while(size)
  {
    count++;
    size = size->next;
  }

  cout<<"Total nodes are:"<<count<<endl;  

  if(Nth_Node > count || Nth_Node <= 0)
  {
    cout<<"Invalid Node"<<endl;
    return 0;
  }

  Node* present = Head;
  Node* previous = NULL;

  int target = count-Nth_Node;

  if(target == 0)
  {
    Head = present->next;
    delete present;
  }

  else
  {
    while(target)
   {
     previous = present;
     present = present->next;
     target--;
   }

    previous->next = present->next;
    delete present;
 }


  //print
  Node* print = Head;
  while(print)
  {
    cout<<print->data<<endl;
    print = print->next;
  }
}

// Time Complexity

//  Step 1: Counting nodes
//  This traverses the entire linked list once.
//  If number of nodes = n
//  Time taken = O(n)
//  Step 2️: Moving to target node
//  In worst case (when deleting last node or near last),
//  this loop also runs up to n times.
//  Time taken = O(n)
//  Final Time Complexity = O(2n) ~ O(n);

// Space Complexity = O(1) (Constant Space)