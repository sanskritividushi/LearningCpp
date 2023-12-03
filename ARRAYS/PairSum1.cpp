#include <iostream>
using namespace std;

int main(){
    int a[]={1,4,5,6,8,10};
    int n=sizeof(a)/sizeof(int);

    int i=0; 
    int j=n-1;
    int sum=11;

    while (i<j){
        if (a[i]+a[j]== sum){
            cout << a[i] << "," <<a[j]<<endl;
            i++;
            j--;
        }
        else if (a[i]+a[j]< sum){
            i++;
        }
        else if(a[i]+a[j] > sum){
            j--;
        } 
    }
    return 0;
}