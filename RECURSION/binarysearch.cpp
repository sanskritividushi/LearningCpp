#include <iostream> 
using namespace std;
int binsearch(int *a, int s, int e, int key){
    //base 
    if(s>e){
        return -1;
    }
    //recursive case
    int mid=(s+e)/2;

    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]<key){
        return binsearch(a,mid+1,e,key);
    }

    else{
        return binsearch(a,s,mid-1,key);
    }
}


int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n= sizeof(a)/sizeof(int);
    int key=5;
    cout << binsearch(a,0,n-1, key);
    
}