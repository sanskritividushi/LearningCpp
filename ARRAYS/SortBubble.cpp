#include <iostream>
using namespace std;

int main(){
    // int a[5]={9,2,1,8,5};
    // int n=5;
    // for (int i = 0; i<n; i++){
    //     for (int j = 0; j<n-i-1; j++){ 
    //         if(a[j]>a[j+1]){
    //             int temp = a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }
    //     }
    // }
    // for (int i=0; i<n; i++){
    //     cout << a[i] <<" ";
    // }
    // return 0;
    int n=6;
    int a[6]= {10,9,3,11,12,4};
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i=0; i<n ; i++){
        cout << a[i] <<" ";
    }
}
    // int nums1[] = {1, 2, 3, 0, 0, 0};
    // int nums2[]={2,5,6};
    // int m=3; int n=3;
    // int k = 6;
    //     for(int i=m; i<=k-1; i++){
    //         for (int j=0; j<n; j++){
    //         nums1[i]= nums2[j];
    //         }
    //     }

        // for(int i=m, j=0 ; j<n; j++){
        //     nums1[i]= nums2[j];
        //     i++;Z
        //     }
    // for (int i=0; i<=n-2; i++){
    //     for (int j=0; j<= n-2; j++){
    //         if (a[j]> a[j+1]){
    //             swap(a[j],a[j+1]);
    //         }

    //     }
    // }
    
    