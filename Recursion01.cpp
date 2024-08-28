// Factorial of a no;
#include<iostream>
using namespace std;


int factorial (int n ){
    // base case
    if(n==1)
    return 1;
    if (n==0)
    return 1;
    

// recursive relation
        // int ans = n*factorial(n-1);
            // return ans;
            int relationkaans=factorial(n-1);
// Processing

int finalans= n * relationkaans;
return finalans;

}

int main(){

cout<<factorial(5)<<endl;
}  