#include<iostream>
#include<vector>
using namespace std;

void printSubArray_Util(vector<int> &num, int start, int end) {
    // base case
     if (end ==num.size()){
        return;
    }

    // case 1 
    for (int i = start; i <= end; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    // recursive call
    printSubArray_Util(num, start, end + 1);
}

void printSubArrays(vector<int>& nums) {
    for (int start = 0; start < nums.size(); start++) {
            int end =start;
            printSubArray_Util(nums, start, end);
        
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    printSubArrays(nums);

    return 0;
}
