          //A simple code of Recursion to print the countdown of birthday//

#include<iostream>
using namespace std;

  void funBirthday (int n)
  {
    
    if(n==0)                  //Base condition//      
    {
        cout<<"\nIT'S YOUR BIRTHDAY TODAY...A VERY HAPPY BIRTHDAY";
        return ;
    }

        cout<<n<<" days left for birthday.\n";

        funBirthday (n-1);

    
  }

int main()
{
    funBirthday (15);
}