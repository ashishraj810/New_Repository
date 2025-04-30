#include<iostream>
using namespace std;

int main()
{
    string str[]= {"B", "A", "C"};
    int size=sizeof(str)/sizeof (str[0]);

    for(int i=0 ; i<size ; i++)
    {
        char c=str[i][0];
        int asciiValue = int c;

        cout<<"ASCII Value of "<<c<<"is"<<asciiValue<<endl;
    }
    return 0;
}