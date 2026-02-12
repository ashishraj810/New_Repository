#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;

  //constructor
  Node(int value)
  {
    data = value;
    next = NULL;
  }
};
int main()
{
  Node *Head , *Tail;
  Tail = Head = NULL;

  int arr[] = {3,2,5,3,8};
  //Insert the value at end

  for(int i=0 ; i<5 ; i++)
  {
    //Linked list is empty
    if(Head == NULL)
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }

    //Linked list exists
    else{
      Tail->next = new Node(arr[i]);
      Tail = Tail->next;
    }
  }

  Node *temp;
  temp = Head;

  while(temp)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }

}