#include <iostream>
using namespace std;

//1. create a partition 
//pivot element 
//s to pivot, pivot+1 to end 

//2. sort the partitions/ subarrays


void merge(int *a, int *b, int *c, int s, int e){
    int mid= (s+e)/2;
    int i=s; 
    int j=mid+1; 
    int k=s; 

    while(i<=mid && j<=e){
        if(b[i]<=c[j]){
            a[k++]=b[i++];
        }
        else{
            a[k++]=c[j++];
        }
    }
    while(i<=mid){
        a[k++]=b[i++];
    }
    while(j<=e){
        a[k++]=c[j++];
    }
}

void mergesort(int *a, int s, int e){
    //base case 
    if(s>=e){
        cout << "sorted arr, return" << endl;
        return;
    }
    //rec case 
    //1. divide
    int b[100], c[100];
    int mid= (s+e)/2;

    for(int i=0; i<100; i++){
        b[i]=0; 
        c[i]=0;
    }

    for(int i=0; i<=mid; i++){
        b[i]=a[i];
    }
    for(int i=mid+1; i<=e; i++){
        c[i]=a[i];
    }
    //2. sort == pure assumption 
    mergesort(b, s,mid);
    mergesort(c,mid+1,e);

    //3. merge
    merge(a,b,c,s,e);
}

void print(int *a, int n){
    for(int i=0; i<n ; i++){
        cout << a[i] <<" ";
    }
}


int main(){
    int a[]={1,8,3,4,5,6,7,8};
    int n= sizeof(a)/sizeof(int);
    mergesort(a,0,n-1);
    print(a,n);
    
}