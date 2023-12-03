//implement queue using array
#include <iostream> 
#include <queue>
using namespace std;

class queue{
    int *arr;
    int qfront;
    int rear;
    int size;

public: 
    queue(){
        size = 100001; 
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    bool isempty(){
        if (qfront == rear){
            return true;
        }
        else{
            return false;
        }

    }
    void enqueue(int data){
        if(rear==size){ //if rear index is greater than n-1 i.e equal to n, arr in full
            cout << "queue is full" <<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue(){
        if (qfront ==rear){
            cout << "queue is empty" <<endl;
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront ==rear){ //this condituion is incase the stsarting indices are empty
                qfront = 0; 
                rear = 0;
            }
            return ans;
        }
    }
    int front(){
        if (qfront==rear){
            cout << "queue is empty" <<endl;
            return -1;
        }
        else{
            return arr[qfront];
        }   
    }
};

int main(){
    queue q;
    
}