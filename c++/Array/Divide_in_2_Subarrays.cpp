#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int INT_MIN;
    int maxi=INT_MIN,prefix=0;
    int sum=0;
    int n=arr.size();

    for(int i=0 ; i<n ; i++)
    {
        sum+=arr[i];
    }

    for(int i=0 ; i<n-1 ; i++)
    {

        prefix+=arr[i];
        if(sum==2*prefix)
        return 1;

    }
    return 0;
}

int main()
{
   int n,i;
   cout<<"Enter the size of array :";
   cin>>n;

   vector<int>v(n);
   cout<<"Enter the elements of array :";
   for(i=0 ; i<n ; i++)
   {
     cin>>v[i];
   }

   cout<<divide(v);
}