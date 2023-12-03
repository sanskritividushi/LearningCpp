#include <iostream>
using namespace std;

//wap to implement double ended queues using arr
#define MAX 10

class Deque {
    int arr[MAX];
    int front;
    int rear;
    int size;
 
public:
    Deque(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }
};
 
// Checks whether Deque is full or not.
bool isFull(){
    return ((front == 0 && rear == size - 1) || front == rear + 1);
}
 
// Checks whether Deque is empty or not.
bool isEmpty(){ 
    return (front == -1);
}
 
void insertfront(int key){
    // check whether Deque if  full or not
    if (isFull()) {
        cout << "Overflow" << endl;
        return;
    } 
    // If queue is initially empty
    if (front == -1) {
        front = 0;
        rear = 0;
    }
    // front is at first position of queue
    else if (front == 0)
        front = size - 1;
    else // decrement front end by '1'
        front = front - 1;
    // insert current element into Deque
    arr[front] = key;
}

void insertrear(int key){
    if (isFull()) {
        cout << " Overflow " << endl;
        return;
    }
    // If queue is initially empty
    if (front == -1) {
        front = 0;
        rear = 0;
    }
    // rear is at last position of queue
    else if (rear == size - 1)
        rear = 0;
    // increment rear end by '1'
    else
        rear = rear + 1;
    // insert current element into Deque
    arr[rear] = key;
}
 
void deletefront()
{
    // check whether Deque is empty or not
    if (isEmpty()) {
        cout << "Queue Underflow\n" << endl;
        return;
    }
 
    // Deque has only one element
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else
        // back to initial position
        if (front == size - 1)
        front = 0;
 
    else // increment front by '1' to remove current
        // front value from Deque
        front = front + 1;
}
 
// Delete element at rear end of Deque
void deleterear()
{
    if (isEmpty()) {
        cout << " Underflow" << endl;
        return;
    }
 
    // Deque has only one element
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size - 1;
    else
        rear = rear - 1;
}
 
// Returns front element of Deque
int getFront()
{
    // check whether Deque is empty or not
    if (isEmpty()) {
        cout << " Underflow" << endl;
        return -1;
    }
    return arr[front];
}
 
// function return rear element of Deque
int getRear()
{
    // check whether Deque is empty or not
    if (isEmpty() || rear < 0) {
        cout << " Underflow" << endl;
        return -1;
    }
    return arr[rear];
}
 
// Driver code
int main()
{
    Deque dq(5);
    dq.insertrear(5);
    dq.insertrear(10);
 
    cout << dq.getRear() << endl;
 
    dq.deleterear();
    cout  << dq.getRear() << endl;
 
    dq.insertfront(15);
 
    cout << dq.getFront() << endl;
 
    dq.deletefront();
 
    cout << dq.getFront() << endl;
    return 0;
}



//wap to implement double ended queues using LL

class node{
public:
    int data;
    node *next;
    node *prev;

    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

class dq{
    public:
    node *front;
    node *rear;
    int size;

    dq(){
        front = rear = NULL;
        size = 0;
    }


bool isempty(){
    return (front == NULL);
}
int getsize(){
    return size;
}
void insertfront(int d){
    node *nn = new node(d);
    if(nn==NULL){
        return;
    }
    else {
        if(isempty()){
        front = rear = nn;
    }
    else{
        nn->next=front;
        front->prev=nn;
        front=nn;
    }
    size++;
    }
}

void insertrear(int d){
    node *nn = new node(d);
    if(nn==NULL){
        return;
    }
    else {
        if(isempty()){
        front = rear = nn;
    }
    else{
        nn->prev=rear;
        rear->next=nn;
        rear=nn;
    }
    size++;
    }
}

void deletefront(){
    if(isempty()){
        return;
    }
    else if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
        front->prev=NULL;
    }
    size--;
}

void deleterear(){
    if(isempty()){
        return;
    }
    else if(front==rear){
        front=rear=NULL;
    }
    else{
        rear=rear->prev;
        rear->next=NULL;
    }
    size--;
}

void getfront(){
    if(isempty()){
        return;
    }
    else{
        cout<<front->data<<endl;
    }
}
void getrear(){
    if(isempty()){
        return;
    }
    else{
        cout<<rear->data<<endl;
    }
}

};

int main(){
    dq d;
    d.insertfront(10);
    d.insertfront(20);
    d.insertrear(30);
    d.insertrear(40);
    d.getfront();
    d.getrear();
    d.deletefront();
    d.getfront();
    d.getrear();
    d.deleterear();
    d.getfront();
    d.getrear();
    return 0;
}