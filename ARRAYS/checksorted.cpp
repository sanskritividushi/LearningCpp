#include <iostream>
using namespace std;

int main(){
    int arr[] = {3, 4, 5, 1, 2};
    int n = 5;
    for(int i=0; i<n; i++){
        while(arr[i]<arr[i+1]){
            if(!(arr[i+2]>arr[i+1])){
                cout << "false" << endl;
            }
            cout << "true" << endl;
            break;
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        cout << endl;
}