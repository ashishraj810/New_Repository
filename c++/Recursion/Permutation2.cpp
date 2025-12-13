#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int>&arr ,  vector<vector<int> >&ans ,int index)
{
  if(index == arr.size())
  {
    ans.push_back(arr);
    return;
  }

  for(int i=index ; i<arr.size() ; i++)
  {
    swap(arr[index], arr[i]);
    permut(arr ,ans ,index+1);
    swap(arr[index], arr[i]);

  }
}

int main()
{
  vector<int> arr = {1,2,3,4};
  vector<vector<int> >ans;
  int index=0;
  permut(arr ,ans , 0);

  for(int i=index ; i<ans.size() ; i++)
  {
    for(int j=0 ; j<ans[i].size() ; j++)
    cout<<ans[i][j]<<" ";
    cout<<endl;

  }
}