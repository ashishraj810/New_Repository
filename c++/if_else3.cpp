#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>>marks;

    if(marks<33)
    {
        cout<<"you are fail."<<endl;
    }
    else if((marks<=40)&&(marks>=33))
    {
        cout<<"you are pass.your grade is C."<<endl;
    }
    else if(marks<=50)
    {
        cout<<"you are pass.your grade is B."<<endl;
    }
    else if(marks<=60)
    {
        cout<<"you are pass.your grade is B+"<<endl;
    }
    else if(marks<=80)
    {
        cout<<"you are pass.your grade is A"<<endl;
    }
    else if(marks<=90)
    {
        cout<<"you are pass.your grade is A+"<<endl;
    }
    else if(marks<=100)
    {
        cout<<"YOU HAVE GRACEFULLY PASSED AND SCORED A++ GRADE."<<endl;
    }
    else
    {
        cout<<"invalid marks"<<endl;
    }

    return 0;
}