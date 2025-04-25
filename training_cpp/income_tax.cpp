#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    long long income;
    cout << "Enter your annual income: ";
    cin >> income;

    double tax = 0;

    if (income <= 250000) {
        tax = 0;
    } else if ((income>=250001) &&(income<=500000)) {
        tax = (income - 250000) * 0.05;
    } else if ((income >=500001) && (income>=1000000)) {
        tax = (250000 * 0.05) + (income - 500000) * 0.15;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.15) + (income - 1000000) * 0.25;
    }

    cout << fixed << setprecision(2) << tax << endl;

    return 0;
}