#include<iostream>
using namespace std;

int main()
{
    int i,j,fact=1,k=1,s=0;

    for(i=1 ; i<=11 ; i+=2)
    {
      for(j=1 ; j<=i ; j++)
      {
        fact=fact*i;
      }

      if(k)
      {
        s=s+fact;
      }
      else
      {
        s=s-fact;
        k=!k;
      }

       
       cout<<s;

    }
}