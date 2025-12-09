           // Calculate the power of 2 using Recursive approach//

#include<iostream>
using namespace std;

int power(int num,int pow)
{
     if(pow==0)
     return 1;
     if(pow==1)
     return num;

     return num*power(num,pow-1); 
}

int main()
{
    int pow,num;
    cout<<"Enter the value of number :";
    cin>>num;
    cout<<"Enter the value of power :";
    cin>>pow;
    cout<< power(num,pow);  
}