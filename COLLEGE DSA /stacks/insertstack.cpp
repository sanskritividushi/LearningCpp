#include <iostream>
#define MAX 10
using namespace std;

int stack[MAX];
int top = -1;
void push(int val){
    if(top==MAX-1){
        cout << "stackfull" << endl;
        return;
    }
    top = top + 1;
    stack[top] = val;
}

int pop(){
    if (top==-1){
        cout << "empty" << endl;
        return -1;
    }
    int n = stack[top];
    stack[top] = 0;
    top = top - 1;
    return n;
}

void print(){
    for (int i=top; i>-1; i--){
        cout << stack[i] << " ";
    }
    cout << endl;
}
int peek(){
    return stack[top];
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    print();
    cout << pop() << endl;
}