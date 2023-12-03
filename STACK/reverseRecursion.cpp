#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

//1. reverse fucntion 
//2. insert at bottom fn- using recursion 


void insertatbot(stack<int> &s,  int x){
    //base
    if(s.empty()){
        s.push(x);
        return;
    }
    //rec
    int data=s.top();
    s.pop();
    insertatbot(s,x);
    s.push(data);
}


void reversestack(stack <int> &s){
    //base case 
    if(s.empty()){
        return;
    }
    //o/w pop out top eleemnt and insert at bottom 
    int x=s.top();
    s.pop();
    reversestack(s);
    insertatbot(s,x);
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

