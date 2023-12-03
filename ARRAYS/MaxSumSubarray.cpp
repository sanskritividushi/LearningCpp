#include <iostream>
using namespace std;

void subarrays(int a[], int n){
    for (int i=0; i<n; i++){
            for (int j=i; j<n;j++){
                for (int k=i; k<=j; k++){
                    cout << a[k] << " ";
                }
                cout <<endl; 
            }
        }
}
void sumsubs(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            int sum=0;
            for (int k=i; k<=j; k++){
                sum=sum+a[k];
            }
            cout <<sum << endl;
        }
    }
}

void maxsumsub(int a[], int n){
    int maxsum=INT_MIN;
    for (int i=0; i<n; i++){
        for (int j=i; j<n;j++){
            int sum=0;
            for (int k=i; k<=j; k++){
                sum=sum+a[k];
            }
            if (maxsum < sum){
                maxsum=sum;
            }
            
        }
    }
    cout << "maximum sum subarray: " << maxsum <<endl;
    
}

int main(){
    int a[]={4,2,0,1,3};
    int n=sizeof(a)/sizeof(int);

    subarrays(a,n);
    sumsubs(a,n);
    maxsumsub(a,n);
}

#include<iostream>
#include <climits>
using namespace std; 

// void maxsumsub(int a[], int n){
//     int maxsum=INT_MIN;
//     for (int i=0; i<n; i++){
//         for (int j=i; j<n;j++){
//             int sum=0;
//             for (int k=i; k<=j; k++){
//                 sum=sum+a[k];
//             }
//             if (maxsum < sum){
//                 maxsum=sum;
//             }
//         }
//     }
//     cout << maxsum <<endl;
// }
// int main(){
// 	int t,n; 
// 	int a[n];
// 	cin >> t;
// 	for (int i=0; i<t; i++){
// 		cin >>n; 
// 		int a[n]; 
// 		for (int i=0; i<n; i++){
// 			cin >> a[i];
// 		}
// 		cout <<endl;
// 	}
// 	maxsumsub(a,n);
// 	return 0;
// }