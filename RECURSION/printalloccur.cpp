#include <iostream> 
using namespace std;

int out[100];
int j=0;
void printalloccur(int *a, int n, int i, int key){
    //base
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout << i << " ";
        out[j]=i;
        j++;
    }
    printalloccur( a,n,i+1,key);
}

int main(){
    int a[]={1,2,3,4,5,6,4,8};
    int n= sizeof(a)/sizeof(int);
    printalloccur(a,n,0,4);
    cout <<endl;
    cout << "indices are: "<< endl;
    for (int k=0; k<j; k++){
        cout << out[k] <<" ";
    }
}