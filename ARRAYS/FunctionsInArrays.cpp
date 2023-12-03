#include <iostream>
using namespace std;


void print(int a[10], int n){
    for (int i=0; i<n; i++){
        cout << a[i]<< " ";
    }
    cout <<endl;
}

int main(){
    int a[10]={1,4,2,7,8,9};
    int n=sizeof(a)/sizeof(int);

    print(a,n);
    return 0;
}