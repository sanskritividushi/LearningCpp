#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//GFG SHOP CANDY
vector<int> candy(int candies[], int n, int k){

    vector<int> ans;
    int min=0;
    int buy = 0;
    int free = n - 1;

    while(buy<=free){

        min += candies[buy];
        buy++;
        free -= k;
    }

    int max = 0;
    int buy = k-1;
    int free = 0;
    
    while(free<=buy){

        max += candies[buy];
        buy--
        free += k;
    }

    ans.push_back(min);
    ans.push_back(max);
    return ans;
}
