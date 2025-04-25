              //Convert Decimal to Binary in cpp//

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int remainder,mult=1,answer=0;

    while(num>0)
    {
        remainder=num%2;
        num=num/2;
        answer=remainder*mult+answer;
        mult=mult*10;

    }

    cout<<answer<<endl;
}