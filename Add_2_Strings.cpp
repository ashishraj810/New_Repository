// You are given two strings. You've to add the two strins and return the result

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string num1;
    cout<<"Enter string 1 :";
    getline(cin,num1);
    string num2 ;
    cout<<"Enter string 2 :";
    getline(cin,num2);

    string ans;
    int sum,carry=0;

    int index1=num1.size()-1;
    int index2=num2.size()-1;

    while (index2>=0)
    {
        sum = (num1[index1]-'0') + (num2[index2]-'0')+carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans+= c;

        index1-- , index2--;
          
    }

    while (index1 >= 0)
    {
       sum = (num1[index1]-'0') + carry;
       carry = sum/10;
       char c = '0' + sum%10;
       ans+= c;

        index1-- ;
    }

    if(carry)
    {
        ans+=1;
    }

    reverse(ans.begin() , ans.end());
    cout<<ans;
    
}