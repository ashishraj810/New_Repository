#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    int sqrtVal = sqrt(num);  
    return (sqrtVal * sqrtVal == num);  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num)) {
        cout << num << " is a perfect square." << endl;
    } else {
        cout << num << " is not a perfect square." << endl;
    }

    return 0;
}