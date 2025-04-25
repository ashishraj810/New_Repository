           // To find Fibonaci numbers using recrsion//

#include<iostream>
using namespace std;

int Fibonaci(int n)
{
   
    if(n<=1)
    return n;

    return Fibonaci(n-2)+Fibonaci(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<"The Fibonaci of the number is:"<<Fibonaci(n-2)+Fibonaci(n-1)<<endl;
}