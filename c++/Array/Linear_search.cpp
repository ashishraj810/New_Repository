#include<iostream>
using namespace std;

int main()
{
    int arr[8]={2,3,1,12,7,4,9,14};
    int i,index=-1,target;

    cout<<"Enter the number to search :";
    cin>>target;

    for(i=0 ; i<8 ; i++)
    {
       if(arr[i]==target)
       {
        index=i;
       }
    }
    cout<<index;
}