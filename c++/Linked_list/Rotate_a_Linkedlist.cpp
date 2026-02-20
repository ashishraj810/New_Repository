//First create a linkedlist and then reverse it and print it.

#include<iostream>
#include<vector>
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

Node* CreateLinkedlist(int arr[] , int index , int size)
{
  //Base case
  if (index==size)
  return NULL;

  Node *temp = new Node(arr[index]);
  temp->next = CreateLinkedlist(arr ,index+1 ,size);

  return temp;
}

int main()
{
  Node* Head = NULL;

  int arr[] = {23 , 34 , 78 , 90 , 67};

  Head = CreateLinkedlist(arr , 0 , 5);

  vector<int> ans;
  Node *curr = Head;

  while(curr!=NULL)
  {
    ans.push_back(curr->data);
    curr = curr->next;
  }

  int i = ans.size()-1;
  curr = Head;

  while(curr)
  {
    curr->data = ans[i];
    i--;
    curr = curr->next;
  }


  //Print
  Node* Print = Head;
  while(Print)
  {
  cout<<Print->data<<endl;
  Print = Print->next;
  }
}