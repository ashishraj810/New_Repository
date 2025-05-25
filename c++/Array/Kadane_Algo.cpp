#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // int INT_MIN;
    int maxi = INT_MIN, prefix = 0, i;
    int arr[] = {4, 1, -5, 8, -12, 7, 6, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0)
            prefix = 0;
    }

    cout << maxi;
    return 0;
}