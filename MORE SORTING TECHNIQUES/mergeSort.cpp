#include <iostream>
using namespace std;

//divide array into half 
//3 pointers s,e,k
 
 void merge(int *a, int s, int e){
    int mid=(s+e)/2;
    int i=s; 
    int j=mid+1;
    int k=s;
//in temp arr we compare which emelent is smaller out of both arrays 
    int temp[100];
    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    for(int i=s; i<=e;i++){
        a[i]=temp[i];
    }
 }
 void mergesort(int a[], int s, int e){
    //base case  of 1/0 elements
    if(s>=e){
        return;
    }
    //follow 3 steps 
    //1 divide
    int mid=(s+e)/2;
    //recursive array 
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    //merge both parts 
    merge(a,s,e);
 }

 int main(){
    int a[100];
    int n=5;
    // cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0; i<n; i++){
        cout<< a[i] <<" ";
    }
}


