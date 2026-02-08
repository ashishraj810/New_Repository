#include<iostream>
using namespace std;

int main()
{
  double a;
  int b ;
  double c;
  cout<<"Enter the value of a :";
  cin>>a;
  cout<<"Enter the value of b :";
  cin>>b;

  try{
    if(b==0)
    throw "Division by 0 is not allowed";

    c = a/b; 
    cout<<c;   
  }

  catch(const char *e)
  {
    cout<<"Exception occured:"<<e<<endl;
  }


}