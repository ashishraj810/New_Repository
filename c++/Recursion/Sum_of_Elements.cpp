     //To find the sum of elemets of an array//

#include<iostream>
using namespace std;

int sum(int arr[], int index , int n )
{
    if(index==n)
    return 0;

    return arr[index]+sum(arr , index+1 , n);
    


}

int main()
{
    int arr[]={2,5,3,7,8,6,4,3};
    cout<<sum(arr,5,8);
}