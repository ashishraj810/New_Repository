        //print all elements of array using pointer

#include<iostream>
using namespace std;

int main()
{

    //Declaration of array and pointer
    int arr[6]={2,5,1,6,13,9};
    int *ptr=arr;

    //print the elements of array using pointer (Method 1) 
    for(int i=0 ; i<6 ; i++)
    {
        cout<<ptr[i]<<endl;
        
    }

    //print the elements of array using pointer (Method 2)
    for(int i=0 ; i<6 ; i++)
    {
        cout<<*(ptr+i)<<" ";
    }

    cout<<endl;

   //print the address of array using pointer (Method 1)
    for(int i=0 ; i<6 ; i++)
    {
        cout<<&ptr[i]<<" ";
    }

     cout<<endl;

    //print the address of array using pointer (Method 2)
    for(int i=0 ; i<6 ; i++)
    {
        cout<<(ptr+i)<<" ";
    }

    cout<<endl;

    //print the elements of array using pointer (Method 3)
    for(int i=0 ; i<6 ; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }

      cout<<endl;

    //print the elements of array using pointer with ptr--
    for(int i=5 ; i>=0 ; i--)
    {
        cout<<*ptr<<" ";
        ptr--;
        
    }

    return 0;
}