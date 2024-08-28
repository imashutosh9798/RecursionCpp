
#include<iostream>
#include<algorithm>  // Include the algorithm header for std::max function
using namespace std;

void findMax(int arr[], int size, int index, int &maxi) {
    // base case
    if (index >= size)
        return;
    // processing
    maxi = max(maxi, arr[index]);
    // recurisive
    findMax(arr, size, index + 1, maxi);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;  // Fix the variable name typo from mixi to maxi
    findMax(arr, size, index, maxi);

    // Output the maximum value
    cout << "Maximum value in the array: " << maxi << endl;

    return 0;
}
