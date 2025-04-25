          // To print the elements of an array using recursive approach//

#include<iostream>
using namespace std;

void print(int arr[],int index,int n)
{
    if(index==n)       //Base condition//
    return;

   
    cout<<arr[index]<<endl;
    print(arr,index+1,n);
    
}

int main()
{
    int arr[7]={12,23,34,45,56,3,2};
    print(arr,0,7);
}