#include<iostream>
#include<vector>
using namespace std;

int main()
{
        string s ;
        cout<<"Enter the string :";
        getline(cin,s);
        vector<string> ans(10);  // Supports positions 1 to 9
        string temp;
        int index = 0, count = 0;
        int position;

        while (index < s.size()) 
        {
            if (s[index] == ' ')
            {
                position = temp[temp.size() - 1] - '0'; // get the last char as int
                temp.pop_back(); // remove the digit
                ans[position] = temp;
                temp.clear();
                count++;
            } 
            else 
            {
                temp += s[index];
            }
            index++;
        }

        // Handle the last word (after the loop)
        position = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[position] = temp;
        count++;

        // Reconstruct the sentence
        string result;
        for (int i = 1; i <= count; i++) {
            result += ans[i];
            if (i != count) result += ' ';
        }

       cout<< result;
    
}
