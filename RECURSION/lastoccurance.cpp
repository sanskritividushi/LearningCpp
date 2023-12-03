#include <iostream> 
using namespace std;

int lastoccur(int *a, int n, int i, int key){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case 
    if(a[i]== key){
        int biggerindex= lastoccur(a, n, i+1, key);
        if(biggerindex != -1){
            return biggerindex;
        }
        else{
            return i;
        }
    }
    int j= lastoccur(a,n, i+1, key);
    return j;
}

int main(){
    int a[]={1,2,3,4,5,6,4,8};
    int n= sizeof(a)/sizeof(int);
    cout << lastoccur(a,n,0,4);
}