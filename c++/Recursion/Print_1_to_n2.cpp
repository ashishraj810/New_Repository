                //Print 1 to n using 1 arguments//

#include<iostream>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }

    print(n-1);
    cout<<n<<endl;

}

int main()
{
    int n;
    cin>>n;
    print(n);
}
