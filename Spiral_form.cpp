#include<iostream>
using namespace std;

int main()
{
    int arr[5][5]={1,2,3,5,7,9,2,12,23,34,14,1,19,90,67,34,67,89,56,34,36,77,88,66,55};

    int i,j,top=0,right=4,bottom=4,left=0;

    while(left<=right)
    {
      for(j=top ; j<=right ; j++)
      {
        cout<<arr[top][j]<<" ";
      }
      top++;

      for(i=top ; i<=bottom ; i++)
      {
        cout<<arr[i][right]<<" ";
      }
      right--;

      if(top<=bottom)
      {
        for(j=right ; j>=left ; j--)
        {
            cout<<arr[bottom][j]<<" ";
        }
        bottom--;
      }

      if(left<=right)
      {
        for(i=bottom ; i>=top ; i--)
        {
            cout<<arr[i][left]<<" ";
        }
        left++;
      }
    }
    return 0;
}