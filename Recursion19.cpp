#include<iostream>
using namespace std;
void PrintPermutation(string &str, int index){
    // Base Case
    if (index >= str.length() ) {
        cout<<str<<" "<<endl;
        return;

    }
    for (int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        PrintPermutation(str, index+1);
        // To nullify we use  backtracking
                swap(str[index],str[j]);
 
    }
}
int main(){
    string str = "abc";
    int index =0;
    PrintPermutation(str,index );


}