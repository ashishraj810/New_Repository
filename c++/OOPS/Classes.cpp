#include<iostream>
using namespace std;

class student
{   
    public:
    string name;
    int age,roll_number;
    string grade;
};


int main()
{
    student s1;
    s1.name="Ashish";
    s1.age=34;
    s1.roll_number=46707543;
    s1.grade="A+";

    student s2;
    s2.name="Alexa";
    s2.age=568;
    s2.roll_number=765547;
    s2.grade="Z+";

    cout<<s1.age<<" "<<s1.name<<endl;
    cout<<s2.age<<" "<<s2.name;

}