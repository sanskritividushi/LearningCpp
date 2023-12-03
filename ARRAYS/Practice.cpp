// #include<iostream>
// using namespace std;

// void reverse(int a[], int n){

//     int start=0; 
//     int end= n-1;

//     while (start <=end ){
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
//     for (int i=0; i<n; i++){
//         cout << a[i]<< " ";
//     }
//     cout <<endl;
    
// }

// int main() {
// 	int n;
// 	cin>> n; 

// 	int a[n];
// 	if (n>0){
// 		for (int i=0; i<n; i++){
// 			cin>> a[i]; 
// 		}
// 		cout << endl;
// 	}

// 	reverse(a,n);

// 	return 0;
// }



// #include<iostream>
// using namespace std;

// void reverse(int a[], int n){
// 	int b[n];

// 	for (int i=n-1; i>=0; i--){
// 		for (int j=0; j<n; j++){
// 			a[i]=b[j];
// 		}
// 	}
// 	for(int i=0; i<n; i++){
// 		cout << b[i] <<" ";
// 	}
// 	cout <<endl;
// }

// int main() {
// 	int n;
// 	cin>> n; 

// 	int a[n];
// 	if (n>0){
// 		for (int i=0; i<n; i++){
// 			cin>> a[i]; 
// 		}
// 		cout << endl;
// 	}
// 	reverse(a,n);

// 	return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int a,b,c;
	cin>> a>> b>> c;

	while ((a>= -100 && a <= 100) && (b>= -100 && b<= 100) && (c>= -100 && c <= 100)){
		int d= b*b - (4*a*c);
		int x1= (-b + pow(d, 0.5))/2*a;
		int x2= (-b - pow(d, 0.5))/2*a;

		if (d<0){
			cout << "Imaginary" <<endl;
            break;
		}
		if (d>0){
			cout << "Real and Distinct" <<endl;
			if (x1>x2){
				cout << x1 << " " << x2 <<endl;
			}
			else{
				cout << x2 << " " << x1 <<endl;
			}
            break;
        }
		if (d==0){
			cout << "Real and Equal" <<endl;
            cout << x1 << " " <<x2<< endl;
            break;
        }
			
		

	}
	return 0;
}