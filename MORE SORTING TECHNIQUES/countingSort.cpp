#include <iostream>
using namespace std;

void ctingSort(int *arr, int n){
    //margest in arr assuming no>0
    int largest=-1;
    for(int i=0; i<n;i++){
        largest=max(largest, arr[i]);
    }
    //create a freq array 
    int *freq= new int [largest+1]{0};
    for(int i=0; i<n;i++){
        freq[arr[i]]++;
    }
    //put the el back into array a bu reading freq array
    int j=0; 
    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }
}
int main(){
    int arr[]={88,97,10,12,1,5,6,12,5,8};
    int n=sizeof(arr)/sizeof(int);
    ctingSort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}