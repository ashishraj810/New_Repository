                        //To Find the square root of a number//

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number :";
    cin>>number;

    
    
        if(number<1)
        {
            cout<<"Invalid input"<<endl;
        }

         else 
         {
            for (int i=1;i<number; i++)
            {
               if(number<=i*i )
               cout<<"Its a perfect square.";
               
               else{
                cout<<"Its not a perfesct square.";
               }
            }
            
            
         }
         
}