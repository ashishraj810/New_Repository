#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the elements of array :";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key :";
    cin>>key;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==key)
        cout<<i;
    }
   
    


}