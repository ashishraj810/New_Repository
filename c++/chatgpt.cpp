#include<iostream>
using namespace std;

int main() {
    const int arraySize = 6;
    int array[arraySize] = {10 , 4 , 1 , 3 , 2 ,7};

    for (int i = 0; i < arraySize - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arraySize; j++) {
            if (array[i] > array[j]) {
                minIndex = j;
            }
        }
        std::swap(array[i], array[minIndex]);
    }

    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << " ";
    }
    return 0;
}
