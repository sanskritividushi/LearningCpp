#include <iostream>
#include <vector>
using namespace std;

class minmaxstack{
    vector<int> stack;
    vector<int> mins;
    vector<int> maxs;

public: 
    void push(int data){
        int currmin = data;
        int currmax = data;

        if(mins.size()){
            currmin = min(mins[mins.size()-1], data);
            currmax = max(maxs[maxs.size()-1], data);
        }
            
        mins.push_back(currmin);
        maxs.push_back(currmax);
        stack.push_back(data);
        
    }

    int getmin(){
        return mins[mins.size()-1];
    }
    int getmax(){
        return maxs[maxs .size()-1];
    }
    int top(){
        return stack[stack.size()-1];
    }
    bool empty(){
        return stack.empty();
    }
    void pop(){
        mins.pop_back();
        maxs.pop_back();
        stack.pop_back();
    }

    void print(){
        for(int x:stack){
            cout << x << " ";
        }
        cout << endl;
        for(int x:mins){
            cout << x << " ";
        }
        cout << endl;
        for(int x:maxs){
            cout << x << " ";
        }
        cout << endl;
    }
};

int main(){
    minmaxstack m;
    // cout << min(3, 5) << endl;
    m.push(1);
    m.push(3);
    m.push(5);
    m.push(8);

    m.print();
    cout << endl;
    cout << m.getmax() << endl;
    m.pop();
    cout << m.getmin() << endl;
    cout << m.getmax() << endl;

    m.pop();
    m.pop();
    cout << m.top() << endl;
    cout << m.getmax() << endl;

    return 0;
}