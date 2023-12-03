#include <iostream> 
using namespace std;

void bubblesort(int *a, int n, int i){
    //base 
    if(i==n-1){
        return;
    }
    //recursive case
    for(int j=0; j<n-i-1; j++){
        if(a[j]> a[j+1]){
            swap(a[j], a[j+1]);
        }
    }
    bubblesort(a,n,i+1);
}

void print(int *a, int n){
    for(int i=0; i<n ; i++){
        cout << a[i] <<" ";
    }
}


int main(){
    int a[]={1,8,3,4,5,6,7,8};
    int n= sizeof(a)/sizeof(int);
    bubblesort(a,n,0);
    print(a,n);
    
}