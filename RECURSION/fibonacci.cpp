#include <iostream>
using namespace std;

int fibo(int n){
    if (n==0 || n==1){
        return n;
    }
    //recurrence relation 
    //fibo(n)= fibo(n-1)+ fibo(n-2);
    // int smallerans1= fibo(n-1);
    // int smallerans2= fibo(n-2);
    // int bigans= smallerans1+ smallerans2;
    // return bigans; 
    //or 
    return fibo(n-1)+ fibo(n-2);
}

int main(){
    int n=5;
    int i=0;
    cout << fibo(n) <<endl;

    return 0; 

}