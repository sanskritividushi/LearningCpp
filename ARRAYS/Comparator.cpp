#include <iostream>
using namespace std;

void printarray(int a[], int n){
    for (int i=0; i<n; i++){
        cout << a[i] << " "; 
    }
    cout <<endl;
}

bool compare (int a, int b){
    return a>b; //a<b makes the sorting descending 
}
void bubblesort(int a[], int n, bool (&newcompare)(int a, int b)){ //& references to compare function with new name
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (newcompare(a[j], a[j+1])){ //compare fucntion utilised
                swap (a[j], a[j+1]);
            }
        }
    }
}
int main(){
    int a[]={5,2,7,8,3,-1};
    int n=sizeof(a)/sizeof(int);

    cout << "Before sort " <<endl;
    printarray(a,n);

    bubblesort(a,n, compare); //compare parameter directly added to function
    //sort(a,a+n, compare);

    cout << "After sort " <<endl;
    printarray(a,n);
    return 0;
}