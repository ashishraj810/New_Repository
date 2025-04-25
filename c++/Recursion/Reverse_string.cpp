        //Reverse a string using recursion//

#include<iostream>
using namespace std;

void Stringreverse(string &str,int start,int end)
{
     if(start>=end)       //Base condition//
     return;


     char c=str[start];
     str[start]=str[end];
     str[end]=c;
     Stringreverse(str,++start,--end);
}


int main()
{
    string str;
    cout<<"Enter the string :";
    cin>>str;
    Stringreverse(str,0,str.length()-1);
    system("pause");
    cout<< str ;

}