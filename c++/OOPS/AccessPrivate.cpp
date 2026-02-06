          //We can access the private data using the set function//

#include<iostream>
using namespace std;

class student
{
    string name;
    int age=-1,roll_number;
    string grade;

    
    public:
    
    //Setter Function Implemenataion.

    void setage(int x)
    {
        if(x<1 || x>100)
        {
            cout<<"Invalid age"<<endl;
            age=-1;
            return;
        }
        age = x;
    }

    void setname(string n)
    {
        if(n.size()==0)
        {
            cout<<"Invalid name"<<endl;
            return;
        }
        name = n;
    } 

    void setgrade(string g)
    {
        grade = g;
    }


    //Getter Function Implemenataion.

    void getname()
    {
        cout<<name<<endl;
    }

    void getage()
    {
        if(age!=-1)     // Print only if valid
        cout<<age<<endl;
    }

    string getgrade(int pin)
    {
        if(pin == 987)
        cout<< grade<<endl;
        else
        cout<<"wrong pin"<<endl;
    }

};


int main()
{
    student s1;
    s1.setname("R");
    s1.setage(101);
    s1.setgrade("B+");

    s1.getname();
    s1.getage();
    s1.getgrade(98);

    return 0;
}