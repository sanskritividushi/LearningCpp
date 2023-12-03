#include <iostream>
using namespace std;

int main(){
    int a[]={1,4,5,6,8,10};
    int n=sizeof(a)/sizeof(int);

    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            for (int k=i; k<=j; k++){
                cout << a[k] << " ";
            }
            cout <<endl;
        }
    }
    return 0;
}