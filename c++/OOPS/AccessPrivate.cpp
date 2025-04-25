          //We can access the private data using the set function//

#include<iostream>
using namespace std;

class student
{
    string name;
    int age,roll_number;
    string grade;

    public:
    void setage(int x)
    {
        age=x;
    }
    void setname(string n)
    {
        name=n;
    } 

    void getname()
    {
        cout<<name<<endl;
    }

    void getage()
    {
        cout<<age<<endl;
    }


};


int main()
{
    student s1;
    s1.setname("Ashish");
    s1.setage(23);
    s1.getname();
    s1.getage();
}