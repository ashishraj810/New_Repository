#include<iostream>
using namespace std;

int main()
{
    int arr[4][4]={2,4,1,5,8,5,34,45,67,7,90,12,44,78,90,9};
    int i,j;

    for(i=0 ; i<3 ; i++)
    {
        for(j=i+1 ; j<4 ; j++)
        {
        swap(arr[i][j] , arr[j][i]);
        }
    }

    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;

}