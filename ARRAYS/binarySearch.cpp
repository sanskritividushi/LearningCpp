#include <iostream> 
using namespace std;

int binarysearch(int a[], int n, int key){
    int s=0; 
    int e= n-1;

    while(s<= e){
        int mid= s+ ((e-s)/2);
        if(a[mid]== key){
            return mid;
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+ ((e-s)/2);
    }
    return -1;
}

int main(){
    int a[5]={3,4,5,6,7};
    int n=5;
    cout << binarysearch(a,5,7) ;

}