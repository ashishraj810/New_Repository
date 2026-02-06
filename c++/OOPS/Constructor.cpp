#include<iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;

  public:

   //default constructor
  Customer()
  {
    name = "Ashish";
    account_number = 123;
    balance = 201;
  }

  //Parametrised constructor
  // Customer(string name , int account_number , int balance)
  // {
  //   this->name = name;
  //   this->account_number = account_number;
  //   this->balance = balance;
  // }

  //Inline constructor
  inline Customer(string a , int b , int c):name(a) , account_number(b) , balance(c)
  {

  }

  void display()
  {
    cout<<name<<" "<<account_number<<" "<<balance<<endl;
  }

};


int main()
{
  Customer C1 , C2("Raj" , 234 , 890);
  C1.display();
  C2.display();

}