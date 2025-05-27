#include<iostream>
using namespace std;

int main()
{
    
    int remainder,nums,ans;
    cout<<"Enter the number :";
    cin>>nums;
    
    
    while(nums>9)
    {
        int ans=0;

       while(nums>0)
      {
        remainder=nums%10;
        ans+=remainder;
        nums/=10;

      }
       nums=ans;
    }
    cout<<nums;
   
    return 0;
}