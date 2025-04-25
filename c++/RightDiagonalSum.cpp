                    //Sum of right diagonal in a 2-D matrix//

#include<iostream>
using namespace std;

int main()
{
    int i,j,total=0;
    int arr[3][3]={2,5,12,13,7,9,16,5,8};

    for(i=0 ; i<3 ; i++)
    {
        for(j=2 ; j<3 ; j--)
        {
            total=total+arr[i][j];
        }
    }

    cout<<total<<" ";
    
    

}