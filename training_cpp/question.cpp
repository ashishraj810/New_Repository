#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;

    cout<<"enter the value of a:"<<endl;
    cin>>a;

    cout<<"enter the value of b:"<<endl;
    cin>>b;

    cout<<"enter the value of c:"<<endl;
    cin>>c;

    cout<<"enter the value of d:"<<endl;
    cin>>d;

    cout<<"enter the value of e:"<<endl;
    cin>>e;

   if(a>b && a>c && a>d && a>e)
   {
    cout<<"a is greatest"<<endl;
   }

     else if(b>a && b>c && b>d && b>e)
   {
    cout<<"b is greatest"<<endl;
   }

    else  if(c>b && c>a && c>d && c>e)
   {
    cout<<"c is greatest"<<endl;
   }

     else if(d>b && d>c && d>a && d>e)
   {
    cout<<"d is greatest"<<endl;
   }

     else if(d>b && d>c && d>a && d>e)
   {
    cout<<"d is greatest"<<endl;
   }

   else{
    cout<<"invalid input"<<endl;
   }

 return 0;

    
}