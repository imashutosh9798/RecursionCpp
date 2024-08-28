
#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index) {
    // base case
    if (index >= size)
        return;

    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int index = 0;
    printArray(arr, size, index);

    return 0;
}
