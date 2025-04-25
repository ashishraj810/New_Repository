//to get the sum of each element of every row separately and print the index of highest sum//

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[3][3]={12,1,3,23,4,5,8,6,4};
    int INT_MIN;
    int sum=INT_MIN,index;

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            int total=0;
            total+=arr[i][j];

            if(sum<total)
            {
            sum=total;
            index=i;
            }
        }
    }

    cout<<sum<<" "<<index<<" ";

}