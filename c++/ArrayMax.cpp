#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,5,6,7}; 
    int INT_MIN;
    int ans=INT_MIN;

    for(int i=0;i<7;i++)
    {
        if(arr[i] > ans)
        {
        ans = arr[i];
        }
    }

    cout<<ans<<" ";

    return 0;
}    