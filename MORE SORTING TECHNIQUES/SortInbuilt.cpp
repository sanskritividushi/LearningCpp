#include <iostream>
using namespace std;

bool compare(int a,int b){
    // cout <<" comparing " << a <<" and " << b;
    // cout <<endl;
    return a<b; // or a>b for ascending 
}
int main(){
    int a[5]={9,2,1,8,5};
    int n=5;
    for (int i=0; i<n; i++){
        cout<< a[i] << " ";
    }
    cout << endl;
    sort(a, a + n, compare);

    for (int i=0; i<n; i++){
        cout<< a[i] << " ";
    }
    cout<<endl;
}
