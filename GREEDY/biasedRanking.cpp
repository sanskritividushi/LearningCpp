#include <iostream>
#include <vector>
#include<cstring>
#include<algorithm>
using namespace std;

int abs(int i, int j){
    if (i-j>0){
        return i - j;
    }
    else{
        return j - 1;

    }
}
int main(){
    // int rank[1000000] = {0};
    // int t;
    // cin >> t;
    // while(t--){

    // }
    int rank[] = {1, 2, 2, 1, 5, 5, 7};
    int n = 7;
    int actualrank = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        while(rank[i]){
            sum+=abs(actualrank, i);
            rank[i]--;
            actualrank++;
        }
    }
    cout << sum << endl;
}
