#include<iostream>
using namespace std;

int main()
{
    int arr[3][4]={3,2,5,4,45,56,90,67,12,13,15,17};

    for(int j=0 ; j<4 ; j++)
    {
        for(int i=0 ; i<3 ; i++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}