#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  // set<int>s;
  set<int , greater<int> >s;    //print from greater to smaller
  //insert
  s.insert(12);
  s.insert(23);
  s.insert(14);
  s.insert(12);
  s.insert(116);
  s.insert(23);
  s.insert(12);
  s.insert(34);

  //find: used to find an element
  if(s.find(14)!=s.end())
  cout<<"Present\n";
  else
  cout<<"Absent\n";

  //count: also used to find an element
  if(s.count(116))
  cout<<"Present\n";
  else
  cout<<"Absent\n";

  //print if the element is present
  cout<<s.count(560)<<" "<<endl;

  //delete an element
  s.erase(23);

  //print to check if the is present or not
  cout<<s.count(23)<<" "<<endl;

  for(int x: s)
  {
    cout<<x<<" "<<endl;
  }
}