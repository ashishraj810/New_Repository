/*write a program that calculates the electric bill based on the following tarrif plan:

1 for 1st 100 units rate is=3.36 rs/__uint
2 for next 200 units rate is=7.34 rs/__uint(101-300)
3 for next 200 units rate is=10.37 rs/__uint (301-500)
4 beyond 500 units rate is=11.86 rs /unit*/

#include<iostream>
using namespace std;

int main()
{
    int unit;
    double bill;
    cin>>unit;

    if(unit<=100)
    {
       bill=(unit*3.36);
       
    }

    else if(unit<=300)
    {
        bill=(100*3.36)+(unit-100)*7.34;
    }

    else if(unit<=500)
    {
        bill=(100*3.36)+(200*7.34)+(unit-300)*10.37;
    }

    else 
    {
        bill=(100*3.36)+(200*7.34)+(200*10.37)+(unit-500)*11.86;
    }

    cout<<bill;


}
