#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=9;

    int temp[10];
    int j=0;

    while(i>=j)
    {
        temp[j]= arr[i];
        j++;
        i--;
    }

    return 0;


}
