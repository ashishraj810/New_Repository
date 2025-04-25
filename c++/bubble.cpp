#include<iostream>
using namespace std;
int main()
{
    int A[] = {1,2,3,7,5};
    int size = sizeof(A)/sizeof(A[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(A[j] > A[j+1])
            {cout<<"hello"<<" ";
            swap(A[j],A[j+1]);
            }
        }
    }
    for(int i=0 ;i<size;i++)
    {
        cout<<A[i]<<" ";

    }
   
}