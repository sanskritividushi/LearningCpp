#include <iostream>
using namespace std;

void subarrays(int a[], int n){
    for (int i=0; i<n; i++){
            for (int j=i; j<n;j++){
                for (int k=i; k<=j; k++){
                    cout << a[k] << " ";
                }
                cout <<endl;
            }
        }
}
void sumsubs(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            int sum=0;
            for (int k=i; k<=j; k++){
                sum=sum+a[k];
            }
            cout <<sum << endl;
        }
    }
}

void maxsumsub(int a[], int n){
    int maxsum=INT_MIN;
    int wi, wj;
    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            int sum=0;
            for (int k=i; k<=j; k++){
                sum=sum+a[k];
            }
            if (maxsum < sum){
                maxsum=sum;
                wi=i;
                wj=j;
            }
            
        }
    }
    cout << "maximum sum subarray: " << maxsum <<endl;
    for (int i=wi; i<=wj; i++){
        cout << a[i] <<" ";
    }
    cout <<endl;
    
}

int main(){
    int a[]={4,2,0,1,3};
    int n=sizeof(a)/sizeof(int);

    subarrays(a,n);
    sumsubs(a,n);
    maxsumsub(a,n);



}