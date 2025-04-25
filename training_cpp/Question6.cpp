#include<iostream>
using namespace std;

int main()
{
    int i,j,z1,z2,s,k=1,m=2,l=2,n=1;
    for(i=1 ; i<=10 ; i+=2)
    {
        z1=1;

        for(j=1 ; j<=i ; j++)
        {
            z1=z1*k;
        }

        for(j=1 ; j<=l ; j++)
        {
            z2=z2*m;
        }

        if(n)
        s=s+z1/z2;
        else
        s=s-z1/z2;
    }

    return 0;
}
    