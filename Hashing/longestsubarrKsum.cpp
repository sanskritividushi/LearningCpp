#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestsubaaray0sum(int arr[], int n, int k){
    unordered_map<int, int> m;
    int presum = 0;
    int len = 0;
    for (int i = 0; i < n; i++){
        presum= presum+ arr[i];

            if(presum==k){
                //if sum 0
                len = max(len, i + 1);
            }
            if(m.find(presum-k)!=m.end()){
                //mnumber repeating
                len=max(len, i - m[presum-k]);
            }
            else{
                //store first occurence of a sum
                m[presum] = i;
                }
    }
    return len;
}

int main(){
    int arr[] = {1,-1,5,-2,3};
    int n = 5;
    int k = 3;
    cout << longestsubaaray0sum(arr, n, k) << endl;

    return 0;

}