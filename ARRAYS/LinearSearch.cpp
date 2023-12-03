#include <iostream>
using namespace std;

int main(){

int a[5]={1,2,3,4,5};
int n=5;
int k=12; 
for (int i=0; i<n; i++){
    if(a[i]== k){
        cout<< "Key found at "<<i;
        break;
    }
}
if (int i=n){
    cout<< "Key not found";
}
cout <<endl;
return 0;
} 