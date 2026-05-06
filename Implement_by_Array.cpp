Implement Queue by Circular array / Circular Queue
#include<iostream>
using namespace std;

//create a class Queue
class Queue
{
  int *arr;
  int front , rear , size;

  public:

  //Constructor
  Queue(int n)
  {
    arr = new int[n];
    size = n;
    front = rear = -1;
  }

  //Check if queue is empty or not
  bool IsEmpty()
  {
    return front == -1;       //return if front == -1;
  }

  //Queue is full or not
  bool IsFull()
  {
    return (rear + 1) % size == front;
  }

  //Push operation
  void push(int x)
  {
    //Check Empty
    if(IsEmpty())
    {
      cout<<"Pushed "<<x<<" into the Queue\n";
      front = rear = 0;
      arr[0] = x;
      return;
    }

    //Check full
    else if(IsFull())
    {
      cout<<"Queue Overflow\n";
      return;
    }

    //Insert
    else
    {
      rear = (rear+1) % size;
      arr[rear] = x;
      cout<<"Pushed "<<x<<" into the Queue\n";
    }
  }

  //Pop Operation

  void pop()
  {
    //Check Empty
    if(IsEmpty())
    {
      cout<<"Queue Underflow\n";
      return;
    }

    //pop krdo
    else
    {
      if(front == rear)
      {
        cout<<"Popped "<<arr[front]<<" into the Queue\n";
        front = rear = -1;
      }
      else
      {
        cout<<"Popped " <<arr[front]<<" from the queue\n";
        front = (front+1) % size;
      }
    }
  }

  //Peek element
  int start()
  {
    if(IsEmpty())
    {
      cout<<"Queue is empty\n";
      return -1;
    }
    else
    return arr[front];
  }
};

int main()
{
   Queue q(5);
   q.pop();
   q.push(23);
   q.push(24);
   q.push(42);
   q.push(13);
}