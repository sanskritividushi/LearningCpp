#include<iostream>
using namespace std;

int main() {
	cout << "enter size " <<endl;
	int n;
	cin>> n;  

	if (n<0){
		cout << "invalid input. Re-enter input greater than zero:  " <<endl;
		cin>> n;
	}
	int a[n]; 
	cout << "enter values of array " <<endl;
	for (int i=0; i<n; i++){
		cin>> a[i];
	}
	cout <<endl;
	for (int i=0; i<n; i++){
		cout << a[i] <<" " ;
	}
	cout << endl;
	for (int i=0; i<n; i++){
		if (a[i]>1000000000 || a[i]<-1000000000){
			cout << "Invalid input. Re-enter values >-1000000000 and <1000000000" <<endl;
			cin>> a[i]; 
		}
		cout <<endl;
	}

	int m;
	cout << "Enter value to search: " <<endl;
	cin>> m;

	for (int i=0; i<n; i++){
		if (a[i]== m){
			cout << m << " is at Index " << i << endl;
            break;
		}
        if (int i=n || a[i]!= m){
            cout << "-1" <<endl;
        }
	}
    cout << endl;

	return 0;
}