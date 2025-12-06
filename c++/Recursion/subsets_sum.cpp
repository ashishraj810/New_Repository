#include<iostream>
using namespace std;

void print(int arr[] , int index , int n , int sum)
{
  if(index==n)
  {
    cout<<sum<<endl;
    return;
  }

  //Not included
  print(arr , index+1 , n , sum);

  //Not included
  print(arr , index+1 , n , sum+arr[index]);
}

int main()
{

  int arr[] = {3 , 6 , 8 , 2};
  print(arr , 0 , 4 , 0);


}