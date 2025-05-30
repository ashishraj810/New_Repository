#include<iostream>
using namespace std;

int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
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
        int start=0,end=3;
        while(start<end)
        {
        swap(arr[i][start],arr[i][end]);
        start++;
        end--;
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