//wap to implement 2 stck with a single arr write push and pop for both stacks. implementation must allow pushing in either of the stacks till these is no space left in arr
#include <iostream>
#define MAX 10
using namespace std;

int stack[MAX];
int top1 = -1;
int top2 = MAX;
int size = MAX;
void push1(int val)
{
    // check whether you have atleast 1 empty space between top1 and top2
    if (top1 == (top2 - 1))
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top1++;
        stack[top1] = val;
    }
}
int pop1(){
    if(top1==-1){
            cout << "stack 1 empty" << endl;
            return -1;
    }
    int n = stack[top1];
    stack[top1] = 0;
    top1--;
    return n;
}
void push2(int val){
        //check whether you have antleast 1 empty space between top1 and top2
        if(top1 == (top2-1)){
            cout << "stack overflow" << endl;
            return;
        }
        else{
            top2--;
            stack[top2]=val;
        }
    }
int pop2(){
    if(top2==MAX){
            cout << "stack 2 empty" << endl;
            return -1;
    }
    int n = stack[top2];
    stack[top2] = 0;
    top2++;
    return n;
}
// bool isEmpty(){
//     return size;
// }

void print(){
    for (int i = top1+top2; i > -1; i--)
    {
        cout << stack[i] << " ";
    }
    // cout << endl;
    // for (int i = top2; i > -1; i--){
    //     cout << stack[i] << " ";
    // }
    // cout << endl;
}


int main(){
    int stack[MAX];
    push1(10);
    push2(20);
    push1(30);
    push2(40);

    print();
    cout << endl;
    // while(!isEmpty()){
    cout << pop1() << endl;
    cout << pop2() << endl;
    // }
    print();
    // cout << pop() << endl;
}