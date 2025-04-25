      //To check whether a given string is a Palindrome//

#include<iostream>
using namespace std;

bool checkPalindrome(string str,int start,int end)
{
      if(start>=end)
      return 1;

      if(str[start]!=str[end])
      return 0;

      else
      return checkPalindrome(str,start+1,end-1);

}

int main()
{
      string str;
      cout<<"Enter the string:";
      cin>>str;
      int result= checkPalindrome(str,0,str.length()-1);
      cout<< checkPalindrome(str,0,str.length()-1);
     
}
