               //To Print numbers from 'n' to '1' using Recursion//

#include<iostream>
using namespace std;

 void funNum(int n) 
{
    
    if(n==0)               //Base condition//
    return;

    cout<<n<<endl;
    funNum(n-1);
}

int main()
{
    funNum(19);

}