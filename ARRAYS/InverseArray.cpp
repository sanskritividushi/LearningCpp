#include<iostream>
using namespace std;

void inverse(int a[], int n){
	int b[n]; 
	for (int i=0; i<n; i++){
        int j=a[i]; 
        b[j]= i;
		}
    for (int i=0; i<n; i++){
        cout << b[i]<< " ";
	}
    cout <<endl;
}

int main() {
	int n;
	cin >>n; 

	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	cout << endl;

	inverse (a,n);
	return 0;
}