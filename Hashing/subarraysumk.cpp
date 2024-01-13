#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestsubaaray0sum(int arr[], int n, int k){
    unordered_map<int, int> m;
    int ans=0;
    int presum = 0;
    int len = 0;
    for (int i = 0; i < n; i++){
        presum= presum+ arr[i];

            if(presum==k){
                //if sum 0
                ans++;
            }
            // if(m.find(presum)!=m.end()){
            //     //mnumber repeating
            //     len=max(len, i - m[presum]);
            // }
            // else{
            //     //store first occurence of a sum
            //     m[presum] = i;
            //     }
    }
    return ans;
}

int main(){
    int arr[] = {0,-1,1,2,5,-5,-2};
    int n = 7;
    int k = 3;
    cout << longestsubaaray0sum(arr, n, k) << endl;

    return 0;

}