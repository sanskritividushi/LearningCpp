#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool checksum(int arr[], int n){
unordered_set<int> s;
int prefixsum = 0;

for (int i = 0; i < n; i++){
    prefixsum += arr[i];

    if(prefixsum==0 or s.find(prefixsum)!=s.end()){
        return true;
    }
    s.insert(prefixsum);
}
return false;
}

int main(){
    int arr[] = {6,-1,1,0,2,-1,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(checksum(arr, n)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;

}