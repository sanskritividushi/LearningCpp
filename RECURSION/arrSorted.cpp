#include <iostream>
using namespace std;

bool issorted(int *a, int n){
    //base case
    if(n==0|| n==1){
        return true;
    }
    bool issmallersorted= issorted(a+1, n-1);
    if(issmallersorted && a[0]<a[1]){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a[]={1,2,3,4,6};
    int n= sizeof(a)/sizeof(int);
    bool ans= issorted(a,n);
    if(ans== true){
        cout << "sorted" << endl;
    }
    else{
        cout << "not sorted" <<endl;
    }
}