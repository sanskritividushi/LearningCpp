#include <iostream>
#include <queue>
using namespace std;

int main(){
    // priorityque<int> pq; //based on maxheap 
    // int n;
    // cin >> n;

    // for (int i = 1; i < n; i++)
    // {
    //     int no;
    //     cin >> no;
    //     pq.push(no); //ologn
    // }

    // while (!pq.empty()){
    //     cout << pq.top() << endl;
    //     pq.pop();
    // }

//priority queue is by defaukt maxheap but we can convert it to minheap by using greater<int> 

    priority_queue<int, vector<int>, greater<int> > pq; //based on maxheap 
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        pq.push(no); //ologn
    }

    while (!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
}
