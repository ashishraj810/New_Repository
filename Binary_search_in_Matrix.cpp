    //  Apply Binary Search in a Matrix

#include<iostream>
using namespace std;

int main()
{
    int matrix[4][5]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

    int target;
    cout<<"Enter the target value :";
    cin>>target;
    int start=0,end=19,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        int row_index=mid/5;
        int column_index=mid%5;

        if(matrix[row_index][column_index]==target)
        {
           cout<<"The target is found at index "<<row_index<<","<< column_index;
           return 0;
        }

        else if(matrix[row_index][column_index]<target)
        start=mid+1;

        else
        end=mid-1;
    }

 return 0;
}