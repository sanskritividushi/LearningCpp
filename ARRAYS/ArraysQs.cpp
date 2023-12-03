#include <iostream>
using namespace std;


/*
void printarray(int arr[], int n){

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
} 



void swapalt(int arr[], int size){
     for (int i=0; i<size; i+=2){
        if (i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
     }
}
 
int main(){ 
    int even[8]={2,3,4,5,6,7,8,9};
    int odd[5]={2,5,8,9,1};

    swapalt(even,8);
    printarray(even,8);
}
*/

// Find unique 
/*
int findunique(int arr[], int size){
        int ans=0;
        for (int i=0; i< size; i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
   int arr[8]={2,3,4,5,6,7,8,8};
    int size= 8;
    cout << findunique(arr, 8) <<endl;
}


*/

/*

int finddup( int arr[], int size){
    int ans =0;
    for (int i=0; i< size; i++){
        ans=ans^arr[i];
    }
    for (int i=1; i<size;i++){
        ans=ans^i;

    }

    cout<< ans;
}

int main(){
    int arr[8]={2,3,4,5,6,6,8,9};
    finddup (arr,8);
}

*/
//intersection of array

//logically good code but time complexity not matched 
/* 
vector <int> findArrIntr(vector<int> & arr1, int n, vector <int>){
    vector <int> ans;
    for (int i=0; i<n;i++){
        int element = arr1[i];

        for (int j=0; j<m; j++){

            if (element < arr2[j])
            break;

            if (element == arr2[j]){
                ans.push_back(element); // used to add value to vector
                arr2[j]= -23456;
                break;

            }
        }
    }
    return ans;
}
*/

//intersection of arrays (leetcode link paste)
 /*
vector<int> findArrIntr(vector<int>& arr1, int n, vector <int> & arr2){
    int i=0,j=0;
    vector <int> ans;
    while (i<n && j<m){
        if (arr1[i]== arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i]< arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

//pair sum (leetcode link paste)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< vector <int> > ans;
        for (int i=0; i<nums.size(); i++){
            if (arr[i]+arr[j]== target){
                vector <int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

//pair sum codehelp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< vector <int> > ans;
        for (int i=0; i<nums.size(); i++){
            if (arr[i]+arr[j]== target){
                vector <int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end()); //incase ans needed in sorted order
    return ans;
}
*/