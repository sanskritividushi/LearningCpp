// //circular queue using arrays
// #include <iostream>
// using namespace std;
// class Queue{
//     int rear, front;
//     int size;
//     int *arr;
// public:
//     Queue(int s){
//        front = rear = -1;
//        size = s;
//        arr = new int[s];
//     }
//     void enQueue(int value){
//     if ((front == 0 && rear == size-1) || ((rear+1) % size == front)){
//         return;
//     }
//     else if (front == -1) {
//         front = rear = 0;
//         arr[rear] = value;
//     }
//     else if (rear == size-1 && front != 0){
//         rear = 0;
//         arr[rear] = value;
//     }
//     else{
//         rear++;
//         arr[rear] = value;
//     }
// }
// int deQueue(){
//     if (front == -1){
//         return INT_MIN;
//     }
//     int data = arr[front];
//     arr[front] = -1;
//     if (front == rear){
//         front = -1;
//         rear = -1;
//     }
//     else if (front == size-1)
//         front = 0;
//     else
//         front++;
//     return data;
// }
 
// void displayQueue(){
//     if (front == -1){
//         return;
//     }
//     if (rear >= front){
//         for (int i = front; i <= rear; i++)
//             cout << arr[i] << " ";
//     }
//     else{
//         for (int i = front; i < size; i++)
//             cout << arr[i] <<" ";
 
//         for (int i = 0; i <= rear; i++)
//             cout << arr[i] <<" ";
//         }
//     }
// }; 
 
// int main(){
//     Queue q(5);
//     q.enQueue(14);
//     q.enQueue(22);
//     q.enQueue(13);
//     q.enQueue(-6);
//     q.displayQueue();
//     cout << endl;  
//     cout << q.deQueue() << endl;
//     cout << q.deQueue()<<endl;
//     q.displayQueue();
//     cout << endl;
//     q.enQueue(9);
//     q.enQueue(20);
//     q.enQueue(5);
//     cout <<endl;
//     q.displayQueue();
//     cout <<endl;
//     q.enQueue(20);
//     cout <<endl;
//     q.displayQueue();
//     return 0;
// }



//circular queue using lls
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
// };

// class CircularQueue{
// private:
//   node * front;
//   node *rear;

// public:
//     CircularQueue (){
//     front = rear = NULL;
//   }

//   void enqueue (int data){
//     node *newNode = new node ();
//     // newNode->data = data;
//     // newNode->next = NULL;

//     if (front == NULL){
// 	    front = rear = newNode;
// 	    rear->next = front;
//     }
//     else{
//         rear->next = newNode;
//         rear = newNode;
//         rear->next = front;
//       }
//     cout << data << " has been enqueued." << endl;
//   }

//   void dequeue (){
//     if (front == NULL){
// 	    cout << "Queue is empty." << endl;
//     }
//     else if (front == rear){
//         node *temp = front;
//         front = rear = nullptr;
//         delete temp;
//     }
//     else{
//         node *temp = front;
//         front = front->next;
//         rear->next = front;
//         delete temp;
//     }
//   }

//   void display (){
//     if (front == nullptr){
// 	    cout << "Queue is empty." << endl;
//     }
//     else{
//         node *temp = front;
//         cout << "Circular Queue: ";
// 	do{
// 	    cout << temp->data << " ";
// 	    temp = temp->next;
// 	}
// 	while (temp != front);
// 	cout << endl;
//       }
//   }
// };

// int main (){
//   CircularQueue q;

//   q.enqueue (10);
//   q.enqueue (20);
//   q.enqueue (30);
//   q.enqueue (40);
//   q.display ();

//   q.dequeue ();
//   q.dequeue ();
//   q.display ();

//   q.enqueue (50);
//   q.enqueue (60);
//   q.display ();

//   return 0;
// }


//TAKING N NO, OF PLAYERS AS K AS INPUT FIND THE IWNNER OF JOSEPHUS PROBLEM

#include<iostream>
using namespace std;

int Josephus(int, int);
int Josephus(int n, int k)
{
    k--;
    int arr[n];
    //assigning value 1 to all n people
    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }
    int cnt = 0, cut = 0,
        //sword goes to next person 
        num = 1;
    while (cnt < (n - 1)) {
        // Check next k alive people.
        while (num <= k) {
            cut++;
            cut = cut % n;
            if (arr[cut] == 1) {
                //check live peeople
                num++;
            }
        }
        num = 1;
        // Kill the person at cut
        arr[cut] = 0;
        // Update no of killed people
        cnt++;
        cut++;

        cut = cut % n;
 
        while (arr[cut] == 0) {
            cut++;
            cut = cut % n;
        }
    }
    // Output =last alive person index
    return cut + 1;
}

int main(){
    int n = 14, k = 2;
    cout << Josephus(n, k);
    return 0;
}