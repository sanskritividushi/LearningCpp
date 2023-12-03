#include <iostream>
using namespace std;


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
    for (int i=wi; i<wj; i++){
        cout << a[i+1] <<" ";
    }
    cout <<endl;
    
}

void maxsumsub2(int a[], int n){
    int maxsum=INT_MIN;
    int wi, wj;
    int csum[100]={0};

    for( int i=1; i<n ; i++){
        csum[i] +=csum[i-1]+ a[i];
    }

    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            int sum=0;
            sum=csum[j]- csum [i-1];
            if (maxsum < sum){
                maxsum=sum;
                wi=i;
                wj=j;
            }   
        }
    }
    cout << "maximum sum subarray 2: " << maxsum <<endl;
    for (int i=wi; i<=wj; i++){
        cout << a[i] <<" ";
    }
    cout <<endl;
    
}

int main(){
    int a[]={0,1,4,5,6,8,10};
    int n=sizeof(a)/sizeof(int);

    maxsumsub(a,n);
    maxsumsub2(a,n);



}