#include<iostream>
using namespace std;

class Student{
  public:
  string name;
  int age , roll_number;
  string grade;

};

int main()
{
  Student *S = new Student;
  (*S).name = "Raj";
  (*S).age = 20;
  (*S).roll_number = 59;
  (*S).grade = "A+";

  cout<<S->name<<" ";
  cout<<S->age<<" ";
  cout<<S-> roll_number<<" ";
  cout<<S->grade<<" ";



}