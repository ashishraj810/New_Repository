                           //code for finding 2nd largest element in an array

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5]={23,34,45,56,67};
    int INT_MIN;
    int ans=INT_MIN;

      //finding the largest number//

    for( int i=0 ; i<5 ; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }

     //finding 2nd largest//

    int second=INT_MIN;
 
    for( int i=0 ; i<5; i++)
    {
        if(ans!=arr[i])
        second = max(second , arr[i]);
    }


        cout<<second<<"";

    return 0;


}