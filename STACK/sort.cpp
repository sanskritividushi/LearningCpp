#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s, int num){
    //base
    if(s.empty() || (!s.empty() && s.top() <num)){
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();

    //rec call
    sortedInsert(s,num);
    s.push(n);
}

void sortedstack(stack<int> &s){
    //base
    if(s.empty()){
        return;
    }
    int num=s.top();
    s.pop();

    //rec call
    sortedstack(s);
    sortedInsert(s,num);
}

int main(){
    stack <int> s; 
    s.push(9);
    s.push(-7);
    s.push(2);
    s.push(3);
    s.push(-2);

    sortedstack(s);
    //print by popping each element 
    
     while(!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}