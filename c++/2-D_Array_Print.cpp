                     //Print all the elements of a 2-D Array in row major order//

 #include<iostream>
using namespace std;

int main()
{
    int arr[2][4]={1,3,4,2,6,5,7,9};

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}