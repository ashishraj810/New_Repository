             //Implemntation of pointer in array//

#include<iostream>
using namespace std;

int main()
{
    int arr[6]={5,2,13,12,19,20};
    int *ptr=arr;

    //print the address of first element//

    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //print the address of second element//

    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl; 

    //to print the address of all elements//

    for(int i=0 ; i<6 ; i++)
    {
        cout<<&arr[i]<<endl;
        cout<< *(arr+i)<<endl;
    }

    return 0;
    
}