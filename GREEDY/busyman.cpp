#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//GFG N MEETINGS 

static bool cpm(const pair<int, int> a1, const pair<int, int> a2){
    return a1.second < a2.second;
}
int maxactivity(int s[], int f[], int n){
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        pair <int,int> p = {s[i], f[i]};
        v.push_back(p);
    }
    sort(v.begin(), v.end(), cpm);
    int count = 1; //assuming that first activity is taking place
    int ansEnd = v[0].second; //this is ending time of first meeting 
    for (int i = 1; i < n; i++){
        if(v[i].first>ansEnd){ //if starting time of next meeting is greater than ending time of previous meeting
            count++;    //only then can next meeting be conducted
            ansEnd=v[i].second; //ending time for meeting 2 updated
        }
    }
    return count;
}
