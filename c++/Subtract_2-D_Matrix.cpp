                  //Subtract two given matrices//

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int arr1[3][3]={1,3,5,2,13,7,9,57,8};
    int arr2[3][3]={12,23,3,4,67,78,34,1,2};
    int ans[3][3];

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            ans[i][j]=arr2[i][j]-arr1[i][j];
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }
       return 0;

}