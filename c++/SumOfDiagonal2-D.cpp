                //Find the sum of diagonal elements in a 2-D array//

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int arr[3][3]={2,4,1,13,6,14,7,8,9};
    int total=0;

    for(i=0 ; i<3 ; i++)
    {
        total=total+arr[i][i];

    }

    cout<<total<<" ";
    
    return 0;
}