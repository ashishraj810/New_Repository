#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  list<int>l1;

  l1.push_back(12);     //add at end
  l1.push_back(34);     
  l1.push_back(23);
  l1.push_back(78);
  l1.push_back(90);
  l1.push_front(67);    //add at front
  l1.pop_front();       //remove from front
  
  for(int x:l1)         //print values
  {
    cout<<"List is : "<< x<<" "<<endl;
  }

  l1.sort();           //sort list
  
  for(int x:l1)        //print sorted values
  {
    cout<<"Sorted List is : "<< x<<" "<<endl;
  }

  l1.reverse();         //reverse list

  for(int x:l1)        //print reversed list
  {
    cout<<"Reversed List is : "<<x<<" "<<endl;
  }

  cout<<l1.front()<<" "<<l1.back()<<endl;
}