#include<iostream>
using namespace std;

int main()
{
    int arr[7]={3,5,7,12,15,18,24};
    int i,start=0,end=6;

   while(start<end)
   {
        swap(arr[start],arr[end]);
        start++;
        end--;
     
   }

    for(i=0;i<=6;i++)
     {
        cout<<arr[i]<<" ";
     }
}