#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

//delete middle el from stack 

void solve(stack <int> &s, int count, int size){ //size= original size i.e. n+1
    //base 
    if(count == size/2){
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();

    //rec call
    solve(s,count+1, size);

    //backtrack 
    s.push(num);
}

void delmid(stack <int> &s, int n){ // {n= size of resulting stack i.e. (size of original stack - 1)}
    int count=0;
    solve(s, count, n);
}

int main(){
    stack <int> s; 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    delmid(s, 4);
    //print by popping each element 
    
     while(!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}
