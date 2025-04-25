/*write a cpp code in which ask the name of the user and basic salary.calculate the gross salary of this user if HRA is 5% 
of the basic salary and DA is 10% of the basic salary. u hVE TO PRINT THE Nme of the peron in one line and his/her
 gross salary in the next line*/

 #include <iostream>
 using namespace std;

 int main()
 {
    string name;
    int basic_salary;
    cin>>name;
    cin>>basic_salary;
     
    int gross_salary;
    gross_salary=(basic_salary*1.15);

    cout<<name<<"\n"<<gross_salary;

    return 0;
 }