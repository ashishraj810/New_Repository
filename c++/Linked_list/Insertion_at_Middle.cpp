//insertion in a linkedlist at middle
#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *next;

  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

Node* CreateLinkedList(int arr[] , int index , int size )
{
  //Base Case
  if(index == size)
  return NULL;

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedList(arr , index+1 , size);

  return temp;
}
int main()
{
  Node* Head = NULL;

  int arr[] = {2,4,6,4,8,9};
  Head = CreateLinkedList(arr , 0 , 6);

  //Inseert node at a given position

  int x = 3;   //insertion position
  int value = 34;  //insertion value

  Node *temp = Head;
  x--;

  while(x--)
  {
    temp = temp->next;
  };

  Node *temp2 = new Node(value);
  temp2->next = temp->next;
  temp->next = temp2;

  //Print the values
//  Node *temp = Head;
 Node *print = Head;
 while(print)
 {
  cout<<print->data<<" ";
  print = print->next;
 }



}