#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n){
    for(int i=0; i<n; i++){
    s2.push(s1.top());
    s1.pop();
    }
}


void reversestack(stack <int> &s1){
    //helper stack 
    stack<int> s2;
    int n=s1.size();

    for(int i=0;i<n; i++){
        //pick el at top and insert at bottom 
        int x=s1.top();
        s1.pop();
        //transfer n-1-i eloements from stack 1 to 2 
        transfer(s1,s2,n-i-1); //based on fn above 
        //insert x in s1
        s1.push(x);
        //transfer n-1-i elements from stack 2 to stack 1
        transfer(s2,s1,n-i-1);
    }
}


int main(){
    stack <int> s; 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reversestack(s);

    //print by popping each element 
    while(!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}

