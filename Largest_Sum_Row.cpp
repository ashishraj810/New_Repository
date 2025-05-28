//  Find the row having the greatest sum and print its index

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[3][4]={2,5,1,6,3,9,16,28,7,100,51,12};
    int ans=INT_MIN;

    int i,j,index=-1;
    for(i=0 ; i<3 ; i++)
    {
       int total=0;
       for(j=0 ; j<4 ; j++)
       
        total+=arr[i][j];
       

       if(ans<total)
       {
        ans=total;
        index=i;
       }
    }

    cout<<index;

    return 0;
}