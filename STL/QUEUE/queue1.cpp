#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(11);
    cout << q.front() << endl;
    q.push(22);
    cout << q.front() << endl;
    cout << q.size() << endl;

    q.pop();
    cout << "now size is " << q.size() <<endl;

    if(q.empty()){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}
