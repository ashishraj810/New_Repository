    // search in a matrix whose rows and columns are sorted

#include<iostream>
using namespace std;

int main()
{
    int mat[5][5]={4,8,12,17,25,18,24,29,35,42,36,41,43,45,47,48,52,57,61,65,72,82,83,84,85};

    int n=5,m=5,target;
    cout<<"Enter the target :";
    cin>>target;
    int i=0,j=m-1;

    while(i<n && j>=0)
    {
        if (mat[i][j]==target)
        {
           cout<<"The target is found at index "<<i<<","<<j;
           return 0;
        }

        else if(mat[i][j]<target)
        i++;

        else
        j--;
    }
    return 0;
}