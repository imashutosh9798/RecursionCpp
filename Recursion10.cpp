#include<iostream>
using namespace std;

bool checkSorted(int arr[],int size, int index){
    // base case
    if(index>=size){
    return true;
}
// processing 
if (arr [index ]>arr[index-1]){
    // aage check akr na padega ab 
    bool aagekaAns = checkSorted(arr, size,index+1);
    return aagekaAns;
}

else {
    return false;
}

}

int main(){

    int arr []= {10,20,30,40,50,60,70};
    int size = 7;
    int index =1;
    bool isSorted = checkSorted(arr ,size ,index);
    if (isSorted){
        cout<<"Array is sorted"<<endl;

    }
    else {
        cout<<"Array is not sorted"<<endl;
    }

}