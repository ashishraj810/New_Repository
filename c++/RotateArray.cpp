#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[10]={12,23,34,45,56,67,7,889,90,789};
    int temp = arr[9];
    int i;

    for( int i=8 ; i>=0 ; i--)
       {
        arr[i+1] = arr[i];
       }

       arr[0]=temp;

       cout<<arr[i];


       return 0;

}