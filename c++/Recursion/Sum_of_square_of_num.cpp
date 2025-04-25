             // To find the sum of square of n natural nummbers //

#include<iostream>
using namespace std;

int squaresum(int n)
{
    if(n==1)
    return 1;

    return n*n+squaresum(n-1);
}

int main()
{
  int n;
  int temp=n;
  cout<<"Enter the value of number :";
  cin>>n;
  cout<<"The sum of square of first "<<temp<<" natural numbers is :"<<squaresum(n);  
}