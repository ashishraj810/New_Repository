                      //find the Nth element in a fibonacci series//

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter the value of n:";
    cin>>n;

    int arr[1000];

    //define first element = 0//
    //define second element = 1//

    arr[0]=0;
    arr[1]=1;

    for (int i=2 ; i<= (n-1) ; i++ )
    {
    arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[n-1];

    return 0;

}
