#include<iostream>
using namespace std;

int binSearch (int arr[],int s , int e , int target){
    if (s>e){
        return -1;

    }
    int mid = s+(e-s)/2;
    if (arr [mid]== target){
        return mid;
    }
    if (arr[mid]<target){
        return binSearch(arr , mid +1,e, target);
    }
    else {
        return binSearch(arr,mid-1,s , target);

    }
} 


int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size = 8;
    int start =0;
    int end= size -1;
    int target =80;
    int foundIndex = binSearch(arr, start , end , target);
    if (foundIndex!=-1){
        cout <<"Targeeet found at :"<<foundIndex<<endl;

    }
    else{
        cout <<"Target Not Found"<<endl;

    }

}
