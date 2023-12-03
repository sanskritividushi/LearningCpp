#include <iostream> 
using namespace std;
//circular linked lists
class node{
    public:
    int data; 
    node* next;
    
    node(int d){
        this->data=d;
        this->next=NULL;

    }
};

void insertAtHead(node*&head , int d){
    if(head==NULL){
        head = new node(d);
        head->next = head;
    }

    node *temp = new node(d);
    node*tail=head;
    temp->next = head;
    if(tail!=NULL){
    while(tail->next!=head){
        tail= tail->next;
    }
    tail->next = temp;
    }
    head=temp;
}

void insertAtTail(node*&head, int d){
    if(head==NULL){
        head = new node(d);
        head->next = head;
    }
    node *temp = new node(d);
    temp->next = head;

    node*tail=head;
        while(tail->next!=head){
            tail= tail->next;
        }
    tail->next = temp;
}



void print(node*head){ //passing by value 
    node*temp=head;
    while(temp->next!=head){
        cout <<temp->data << "->" ;
        temp= temp-> next;
    }
    return;
}

int main(){
    node *head = NULL;
    // node *tail = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtTail(head, 100);
    print(head);
    return 0;
}