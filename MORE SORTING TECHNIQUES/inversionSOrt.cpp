#include <iostream>
using namespace std;

int merge(int *a, int s, int e){
    int mid=(s+e)/2;
    int i=s; 
    int j=mid+1;
    int k=s;
//in temp arr we compare which emelent is smaller out of both arrays 
    int temp[100000];
    int count=0;
    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k]=a[i];
            k++;
            i++;
        }
        else{
            temp[k++]=a[j++];
            count+=mid-i+1;
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
    return count;
 }
int invcount(int*a, int s, int e){
    if(s>=e){
        return 0;
    }
    //mergesort 
    int mid=(s+e)/2;
    int x= invcount(a,s,mid);
    int y=invcount(a,mid+1,e);
    int z=merge(a,s,e); //cross inversions 
    return x+y+z;

}
int main(){
    int a[]= {1,5,2,6,3,0};
    int n= sizeof(a)/sizeof(int);
    cout<< invcount(a,0,n-1) << " ";
}