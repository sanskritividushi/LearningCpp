#include <iostream>
using namespace std;

int partition(int*a, int s, int e){
    //inplace (cant take extra soace)
    int i=s-1;
    int j=s;
    int pivot=a[e];

    for(;j<=e-1; j++){
        if(a[j]<=pivot){
            //merge the smaller element in the region -1
            i=i+1;
            swap(a[i], a[j]);
        }
        //exoand larger region
        j=j+1;
    }
    //place pivot el at correct index
    swap(a[i+1], a[e]);
    return i+1;
}
void qs(int *arr, int s, int e){
    //base case 
    if(s>=e){
        return;
    }
    //recursive case
    int p=partition(arr, s, e);
    //left part 
    qs(arr,s,p-1);
    //right
    qs(arr, p+1, e);
}
int main(){
    int arr[]={2,7,8,6,1,5,4};
    int n=sizeof(arr)/sizeof(int);

    qs(arr,0,n-1);
    for(int i=0; i<=n-1; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}



