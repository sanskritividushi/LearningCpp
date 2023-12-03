#include <iostream>
#include <queue>
using namespace std;

int joinropes(int arr[], int n){
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr+n);
    int cost = 0;

    while(pq.size()>1){
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        int newrope = a + b;
        cost += a + b;
        pq.push(a+b);
    }
    return cost; 
}

int main(){
    int arr[] = {4, 3, 2, 6};
    int n = 4;

    cout << joinropes(arr, n) <<endl;

    return 0;
}