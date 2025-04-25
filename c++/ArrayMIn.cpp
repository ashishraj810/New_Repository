#include<iostream>
using namespace std;

int main()
{
    int arr[5]={20098,1000,498,507,608};
    int INT_MAX;
    int ans = INT_MAX;

    for (int i=0 ; i<5 ; i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
        break;
    }

    cout<<ans<<"";
}