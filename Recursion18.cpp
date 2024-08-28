#include<iostream>
using namespace std;
void QuickSort(int arr[],int start,int end ){
    if (start>=end ){
        return;
        }
        int pivot = end ;
        int i = start -1;
        int j = start;
        while (j<pivot){
            if (arr[j]<arr[pivot]){
                i++;
                swap(arr[i],arr[j]);

            }
            j++;
        }
        i++;
        swap(arr[i],arr[pivot]);
        QuickSort(arr,start ,i-1);
        QuickSort(arr,i+1,end);

}
int main(){
   
    int arr[]={2,1,6,9,5,4};
    int size = 6;
    int s =0;
    int e = size -1;


    QuickSort(arr,s,e);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }