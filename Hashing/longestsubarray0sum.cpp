#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestsubaaray0sum(int arr[], int n){
    unordered_map<int, int> m;
    int presum = 0;
    int len = 0;
    for (int i = 0; i < n; i++){
        presum= presum+ arr[i];

            if(presum==0){
                //if sum 0
                len = max(len, i + 1);
            }
            if(m.find(presum)!=m.end()){
                //mnumber repeating
                len=max(len, i - m[presum]);
            }
            else{
                //store first occurence of a sum
                m[presum] = i;
                }
    }
    return len;
}

int main(){
    int arr[] = {0,-1,1,2,5,-5,-2};
    int n = 7;
    cout << longestsubaaray0sum(arr, n) << endl;

    return 0;

}