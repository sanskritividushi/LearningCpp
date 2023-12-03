#include <iostream>
using namespace std;

int main(){
    int a[5]={9,2,1,8,5};
    int n=5;
    int i;
    int j;
    
    for (int i=1; i<n; i++){
        int puc=a[i];
        for (j=i-1; j>=0 && a[j]>puc ; j--){
            a[j+1]=a[j];
        }
        a[j+1]= puc;
    }

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}



