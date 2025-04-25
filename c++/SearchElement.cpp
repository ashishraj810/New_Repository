                 //Search an element in a 2-D Array//

#include<iostream>
using namespace std;

int main()
{
    int arr[4][3]={1,2,45,34,23,9,6,17,12,6,5,3};
    int x;
    cout<<"Enter the element  :";
    cin>>x;

    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"OOH! yes it is there.";
                return 0;
            }
            
        }
       
    }
     cout<<"No";
    
        
}