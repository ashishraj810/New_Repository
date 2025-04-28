#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int elements , int target)
{
    int start=0 ,end=elements-1 , mid;

    while(start<=end)
   {
    mid=(start+end)/2;

    if(arr[mid]==target)
    return mid;
       
    else if(arr[mid]>target)
    {
        end=mid-1;
    }   

    else{
        start=mid+1;
        
    }

  } 

  return -1;
}

int main()
{
    int arr[199];

    int i,elements,target;
    cout<<"Enter the number of elements in array:";
    cin>>elements;

    cout<<"Enter the elements of array :";
    for(i=0 ; i<elements ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the target value :";
    cin>>target;

    cout<<BinarySearch(arr,elements,target);

    return 0;
}