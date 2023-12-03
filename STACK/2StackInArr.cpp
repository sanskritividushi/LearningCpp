#include <iostream> 
#include <vector>
using namespace std;

class twoStack{
   int *arr;
   int top1; 
   int top2; 
   int size;
public: 

    //inttialise 2stack
    twoStack(int s){
        this->size=s;
        arr=new int[s];
        top1=-1;
        top2=s;
    }
    void push1(int num){
        //check whether you have atleast 1 empty space between top1 and top2
        if(top2-top1 >1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout << "stack overflow";
        }
    }

    void push2(int num){
        //check whether you have antleast 1 empty space between top1 and top2
        if(top2-top1 >1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout << "stack overflow";
        }
    }
    bool isEmpty(){
        return v.size()==0;
    }
    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main(){
    twoStack s; 

    for (int i=1; i<=5; i++){
        s.push(i*i);
    }
    //print by popping each element 
    while(!s.isEmpty()){
        cout << s.top() <<endl;
        s.pop();
    }


    return 0;
}

