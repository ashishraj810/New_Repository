//    Rotate a given matrix by 180 degrees

#include<iostream>
using namespace std;

int main()
{
    int matrix[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i,j;

    for(j=0 ; j<4 ; j++)
    {
        int cStart=0,cEnd=4;

        while(cStart<cEnd)
        {
            swap(matrix[cStart][j] , matrix[cEnd][j]);
            cStart++,cEnd--;
        }
    }

    for(i=0 ; i<5 ; i++)
    {
        int rStart=0,rEnd=3;

        while(rStart<rEnd)
        {
           swap(matrix[i][rStart] , matrix[i][rEnd]);
           rStart++,rEnd--;  
        }


    }

    for ( i = 0; i < 5; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
    
    return 0;
}