#include<iostream>
using namespace std;
void find(int arr[], int size , int index,int target ){
    if (index>=size)
    return;
    if (arr[index]==traget)
     cout<<index;
    find(arr,size ,index+1,target);
}
int main(){
int arr[] = {50, 20, 50, 40, 50};
    int size = 5;
    int index = 0;
    int target = 50;
    
    cout << find(arr, size, index, target);
    return 0;
}