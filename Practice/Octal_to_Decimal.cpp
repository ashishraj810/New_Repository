               //Octal to decimal conversion//

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;

    int remainder,ans=0,mult=1;

    while(num>0)
    {
        remainder=num%10;
        num=num/10;

        ans=remainder*mult+ans;
        mult*=8;
    }

    cout<<"Required converted form is "<<ans<<endl;

    return 0;
}