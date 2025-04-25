          //Reverse each row of a matrix//

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int arr[3][4]={1,4,2,6,3,4,8,9,14,13,19,3};
   

    for(i=0 ; i<3 ; i++)
    {
        int start=0,end=3;
        while(start<end)
        swap(arr[i][start] , arr[i][end]);
        start++,end--;
    }

    cout<<arr[i][j]<<" ";
    return 0;
}