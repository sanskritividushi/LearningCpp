#include <iostream>
using namespace std;
#define size 10

int deletestart(int arr[], int noe){
    if(noe==0){
        cout <<" arr empty" <<endl;
        return noe;
    }
    arr[0] = 0;
    for (int i=1; i<noe; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[noe-1] = 0;
    noe = noe - 1;
    return noe;
}
int deleteEnd(int arr[], int noe){
    if(noe==0){
        cout <<" arr empty" <<endl;
        return noe;
    }
    arr[noe-1]=0;
    noe=noe-1;
    return noe;

}
int deleteMid(int arr[], int pos, int noe){
    if(noe==0){
        cout <<" arr empty" <<endl;
        return noe;
    }
    arr[pos]=0;
    noe=noe-1;
    for(int i=pos+1; i<size; i++){
        arr[i-1]=arr[i];
    }
    return noe;

}
int main(){
    int arr[size]={12,3,4,5,67,44};
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;

    deletestart(arr,6);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;

    deleteMid(arr,3,5);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;

    deleteEnd(arr,4);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;

}
