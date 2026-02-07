#include<iostream>
using namespace std;

class Customer
{

  string name;
  int account_number , balance;
  static int total_customer;              //static data member 
  static int Total_balance;              //static data member

  public:

  //parametrised constructor
  Customer(string name , int account_number , int balance)
  {
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
    total_customer++;
    Total_balance+=balance;
  }


  //static function
  static void accesStatic()
  {
    cout<<"Total number of customers are : "<<total_customer<<endl;
    cout<<"Total balance is: "<<Total_balance<<endl;
  }

  void display_total()
  {
    cout<<total_customer<<endl;
    cout<<Total_balance<<endl;
  }

  void deposit(int amount)
  {
    if(amount>0)
    {
      balance+=amount;
      Total_balance+=amount;
    }
    

  }

  void withdraw(int amount)
  {
    if(amount>0 && amount<=balance)
    {
      balance-=amount;
      Total_balance-=amount;
    }
    
  }

};

int Customer :: total_customer=0;         //definition (and initialization) of static data members
int Customer :: Total_balance=0;

int main(){
  Customer C1("Raj" , 101 , 3000);
  Customer C2("Sam" , 102 , 4000);
  Customer C3("Ram" , 103 , 7000);

  
  Customer::accesStatic();
  // C1.display_total();
  C1.deposit(1000);                   //amount deposit
  C1.display_total();
  C2.withdraw(200);                  //amount withdraw
  C2.withdraw(4100);
  Customer::accesStatic(); 
  
  // Customer::accesStatic();          //displays the updated total_balance and total customers using static function
  

  
}