/*1.  write a cpp code to find the no. of digits in a positive integer.
2.  write a cpp code to find the sum of digits of a no.
3.  write a cpp code to find if a no. os a palindrome.
4.  write a cpp code to find if a given no. is an armstrong no.
5.  write a cpp code to find a given no. is a perfect square.
6.  write a cpp code to find a given no. is prime.
7.  write a cpp code to find all the factors of a no.(including 1 and the no. itself).
8.  write a cpp code to find all  the prime factors of a no.(e.g. 6=2,3)
9.  write a cpp code to find the HCF/GCD ofntwo no.
10. write a cpp code to find the LCM OF of two no.*/


#include<iostream>
using namespace std;


int countDigits(int num) {
    int count = 0;

    while (num > 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number > 0) {
        int digits = countDigits(number);
        cout << "The number " << number << " has " << digits << " digits." << endl;
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}