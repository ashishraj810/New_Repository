#include<iostream>
using namespace std;

int BubbleSort(int arr[],int size)
{
    
    for(int i=0 ; i<size-1 ; i++)
    {
        for(int j=0; j<size-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int arr[]={56,9,5,4,2,12,8,11,7};
   int size =sizeof(arr)/sizeof (arr[0]);
   

   BubbleSort(arr,size);

}