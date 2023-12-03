#include <iostream>
using namespace std;

void printdec(int n){
    if (n==0){
        return;
    }

    printdec(n-1);
    cout << n <<" "; 
}
int main(){
    int n=10;
    printdec(n);
    cout <<endl;
    return 0;
}