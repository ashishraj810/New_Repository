//Delete  node at end

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
  //Base case
  if(index == size)
  return NULL;

  Node* temp = new Node(arr[index]);
  temp->next = CreateLinkedList( arr , index+1 , size);

  return temp;
}
int main()
{
  Node* Head = NULL;
  int arr[] = {12 , 34 ,23 , 56 , 76 , 98};

  Head =  CreateLinkedList( arr , 0 , 6);

  //Delete a node at the end

  if(Head!=NULL)
  {
    //when only Node is present
    if(Head->next == NULL)
    {
      Node* temp = Head;
      Head = NULL;
      delete temp;
    }
  
    //when more than one node exists

    else
    {
      Node* current = Head;
      Node* prev= NULL;

      while(current->next!=NULL)
     {
       prev = current;
       current = current->next;
     }
     delete current;
     prev->next = NULL;
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