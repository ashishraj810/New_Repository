#include<iostream>
using namespace std;

int PerfectSum(int arr[] , int index , int sum , int n)
{
  if(sum==0)
  return 1;
  if(sum<0 || index==n)
  return 0;

  return PerfectSum(arr,index+1,sum,n) + PerfectSum(arr,index+1,sum-arr[index],n);
}

int main()
{
  int arr[] = {2,5,6,1};
  int ans = PerfectSum(arr ,0 ,8 ,4);
  cout<<ans;
}