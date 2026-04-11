#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //Insert pair of 2 elements
  // pair<string,int>p;

  //Method 1:there are 2 methods to declare this
  // p = make_pair("Ashish" , 32);

  // //Method 2:there are 2 methods to declare this
  // p.first = "Ashish";
  // p.second = 32;
  
  // cout<<p.first<<" "<<p.second<<endl;

  //Insert 3 elements in pair

  //take name,age and weight as three elements to insert
  pair<string , pair<int , int> >p;
  p.first = "Ram";
  p.second.first = 44;
  p.second.second = 70;

  cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}