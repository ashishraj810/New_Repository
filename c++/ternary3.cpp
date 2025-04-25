#include<iostream>
using namespace std;

int main()
{
    char character;
    cin>>character;

    ((character='a')&&(character='e')&&(character='i')&&(character='o')&&(character='u'))? cout<<"vowel"<<endl : cout<<"consonant"<<endl;

    return 0;
}