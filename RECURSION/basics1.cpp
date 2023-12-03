#include <iostream>
using namespace std;

int fact(int n){
    if (n==0){
        return 1; 
    }

    // int smallerans= fact (n-1); //basically for n= 5, n-1=4 , thus fact(4)=24
    // int biggerans= n* smallerans; //5*24
    // return biggerans;

    //OR 
    return n*fact(n-1);
}

int main(){
    int n=5; 
    cout << fact (n) << endl; 
    return 0;
}