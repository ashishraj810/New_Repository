          //Print the elements of array in reverse manner//

#include<iostream>
using namespace std;

void print(int arr[] , int index , int n)
{
    if(index==n)
    return;

    print(arr,index+1,n);
    cout<<arr[index]<<endl;
}

int main()
{
    
    int arr[10]={2,3,1,23,4,45,5,65,7,45};
    print(arr,0,10);
}