    //  Sort a given sentence

#include<iostream>
#include<vector>
using namespace std;

int main()
{

    string input;
    cout<<"Enter the string :";
    getline(cin,input);

    vector<string>ans(10);
    string temp;
    int count=0,index=0;
    int position;

    while(index<input.size())
    {
        if(input[index]==' ')
        {
            position = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[position]=temp;
            temp.clear();
            count++;
        }

        else
        {
        temp+=input[index];
        }
        index++;
    }
     position = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[position]=temp;
            temp.clear();
            count++;

    string result;        
    for(int i=0 ; i<=count ; i++)
    {
        result+=ans[i];
        if(i!=count)
        result+=' ';
    }

    temp.pop_back();
    cout<<result;
}