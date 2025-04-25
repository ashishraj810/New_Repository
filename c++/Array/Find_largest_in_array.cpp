#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[8]={7,6,9,3,12,34,45,67};
    int i,ans=INT_MIN;
    for(i=0 ; i<8 ; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];

    }

    int second=INT_MIN;

    for(i=0 ; i<8 ; i++)
    {
      if(ans!=arr[i])
        {
           second=max(arr[i],second);
        }
    }    

       cout<<second;

    


}