#include <iostream>

void yogesh(int arr[], int& size) {
    if (size == 0 || size == 1) return;

    int uniqueIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    size = uniqueIndex + 1;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

   yogesh(arr, size);

    std::cout << "required array:ṇ ";
    for (int i = 0; i < size; ++i) {
        std::cout <<
