#include <iostream>
using namespace std;

void printdec(int n){
    if (n==0){
        return;
    }

    cout << n <<" "; 
    printdec(n-1);
}

int main(){
    int n=10;
    printdec(n);
    cout <<endl;
    return 0;


}