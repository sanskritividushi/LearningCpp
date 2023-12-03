//wap 1 to prform insertion deletion printing of priority queues
//wap 2 to implement double ended queues using arr/ ll


#include <iostream>
using namespace std;
#define size 20
#define nop 4;
int q[size];
int pq=size/nop;
int front[nop];
int rear[nop];

void insertpq(int val, int pq)
{
    if(rear[pq]<size*(pq+1)-1){
        if(front[pq]==-1){
            front[pq] = rear[pq] = size * pq;
        }
        else{
            rear[pq] = rear[pq] + 1;
        }
        q[rear[pq]] = val;
    }
    else{
        return; //overflow
    }
}
int delpq(int pq){
    if(front[pq]==-1){
        return -1;
    }
    int val = q[front[pq]];
    q[front[pq]] = 0;
    if (front[pq] == rear[pq])
    {
        front[pq] = rear[pq] = -1;
    }
    else{
        front[pq] = front[pq] + 1;
    }
    return val;
}

int main(){
    int nop;
    cin >> nop;

    int x = size / nop;
}
