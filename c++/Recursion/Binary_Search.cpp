//Binary search using recursion.

#include<iostream>
using namespace std;

bool BinarySearch(int arr[] , int start , int end , int target){
  if(start > end)
  return 0;

  int mid = start + (end-start)/2;
  
  if(arr[mid] == target)
  return 1;

  else if(arr[mid] < target)
  return BinarySearch(arr , mid+1 , end , target);

  else
  return BinarySearch(arr ,start , mid-1 , target);

  
  
}

int main(){

  int arr[] = {2 , 4 , 7 , 9 , 11 , 13 , 17};
  int target = 45;

  cout<<BinarySearch(arr , 0 , 6 , target);


}