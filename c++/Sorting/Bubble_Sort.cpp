#include<iostream>
using namespace std;

int BubbleSort(int arr[],int size)
{
    
    for(int i ; i<size-1 ; i++)
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
   int arr[]={23,12,4,7,2,16,1};
   int size =sizeof(arr)/sizeof (arr[0]);
   

   BubbleSort(arr,size);

}