#include<iostream>
using namespace std;

void movezeroes(vector <int> &arr, int n){
    int start = 0, end = 0;
    while(end<n){
        if (arr[end] != 0){
            swap(arr[start], arr[end]);
            start++;
            end++;
        }
        else{
            end++;
        }
    }
}
int main(){
    vector<int> arr = {3,1,0,0,6};
    int n = 5;
    movezeroes(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}