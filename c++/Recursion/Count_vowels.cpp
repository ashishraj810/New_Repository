      //A code to count the number of vowels in a string//

      #include<iostream>
      using namespace std;

      int Checkvowel(string str,int index)
      {

            if(index==-1)
            return 0;

            if( str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
            return 1+Checkvowel(str,index-1);
      
            else
            return Checkvowel(str,index-1);
            
      }

      int main()
      {
           string str;
           cout<<"Enter the string :";
           cin>>str;
           int vowelcount=Checkvowel(str,str.length()-1);
           cout<<vowelcount;

      }
      