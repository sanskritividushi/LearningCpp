#include <iostream> 
using namespace std;
int firstoccur(int *a, int n, int key){
    //base 
    if(n==0){
        return -1;
    }
    //recursive case
    if(a[0]==key){
        return 0;
    }
    int i=firstoccur(a+1, n-1, key);
    if(i==-1){
        //key not found
        return -1;
    }
    return i+1;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n= sizeof(a)/sizeof(int);
    cout << firstoccur(a,n,5);
}