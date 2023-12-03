#include <iostream>
using namespace std;

//initialising and taking user unput using cin for entire array 

int main(){
    int a[100];
    int n;
    cout << "enter n "<< endl;
    cin>>n; //specifies the number of inputs to be takes since in the loop, i goes from 0 to n-1
    cout <<endl;

    for (int i=0; i<n; i++){ // n iputs, not 100. 100 means the size of n cant exceed 100
        cin >> a[i];
    }
    cout <<endl;

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    cout <<endl;
    return 0;
}   