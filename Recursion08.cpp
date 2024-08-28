#include<iostream>
using namespace std;

int find(int arr[], int size, int index, int target) {
    // base case
    if (index >= size)
        return -1;
    
    // processing 
    if (arr[index] == target)
        return index;
    
    // recursion 
    return find(arr, size, index + 1, target);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 50;
    
    cout << find(arr, size, index, target);
    return 0;
}
