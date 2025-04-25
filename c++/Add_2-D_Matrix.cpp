              //Add 2 given matrices//

#include<iostream>
using namespace std;

int main()
{
    int arr1[3][4]={2,12,3,4,13,4,5,6,45,16,17,23};
    int arr2[3][4]={21,23,3,4,23,34,34,9,7,6,4,1};
    int ans[3][4]={0};


    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            ans[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }

    return 0;
















}              