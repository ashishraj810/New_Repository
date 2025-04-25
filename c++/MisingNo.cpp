                         // Finding missing no. in a continuos  array //


#include <iostream>
using namespace std;

int MissingNumber(int arr[], int n) {
    int sum = (n + 1) * (arr[0] + arr[n - 1]) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    return sum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number: " << MissingNumber(arr, n);
    return 0;
}

