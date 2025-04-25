          //To find the minimum element of an array using recursion//

#include<iostream>
using namespace std;

int min(int arr[],int index,int n)
{
    if(index==n)
    return arr[index];

    return min(arr[index],min(arr,index+1,n));
}

int main()
{
    int arr[]={2,5,7,4,89,1,32,23,43,4,5};
    cout<<min(arr,0,9);

}