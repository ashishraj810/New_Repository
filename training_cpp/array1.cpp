#include<iostream>
using namespace std;

int main()
{
    int arr[]={7,2,3,12,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int slargest = INT32_MIN; 
    for(int i = 1;i<size;i++)
    {
        if(largest<arr[i])
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(slargest<arr[i])
        {
            slargest=arr[i];
        }
    }   
    cout<<largest<<" "<<slargest<<endl;
}