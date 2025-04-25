         //Provide a code to find the greatest common divisor of any two numbers//

#include<iostream>
using namespace std;

int GreatestCommonDivisor(int a, int b)
{
    if(b==0)
    return a; 
    
    return GreatestCommonDivisor(b,a%b); 
}

int main()
{
   int a,b;
   cout<<"Enter the value of a :";
   cin>>a;
   cout<<"Enter the value of b :";
   cin>>b;

   cout<<"The GreatestCommonDivisor of given numbers is : "<<GreatestCommonDivisor(a,b);


}