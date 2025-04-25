#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};      //code for finding the index of any element in array//

    int ans = -1;
    int index;

    for(int i=0 ; i<=10 ; i++)
    {
        if(arr[i]==7)
        index=i;
    }

    cout<<index<<endl;



}