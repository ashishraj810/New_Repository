#include<iostream>
using namespace std;

class student
{
    public:

    string name;
    int age,roll_number,mobile_number;
    string grade;

};

int main()
{
    student s1;
    s1.name = "Ashish";
    s1.age = 12;
    s1.roll_number = 12340;
    s1.mobile_number = 342567689;
    s1.grade = "B+";

    cout<<s1.name<<endl<<s1.age<<endl<<s1.roll_number<<endl<<s1.mobile_number<<endl<<s1.grade;

}