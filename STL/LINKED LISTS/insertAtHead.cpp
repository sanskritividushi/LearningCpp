#include <iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node * next;
    Node(int d){
        this-> data=d;
        this-> next=NULL;
    }
};

//here we insert at head 
void InsertAtHead(Node* &head, int d){
    //new node created for every node
    Node* temp = new Node(d);
    temp -> next = head;
    head=temp;
}
//how to traverse a LL
void print(Node * &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<endl;
}

int main(){
    Node* n1= new Node (10);
    // cout << n1->data <<endl;
    // cout << n1->next <<endl; 

    Node*head= n1;
    print(head);

    InsertAtHead(head, 20);
    print(head);

    InsertAtHead(head, 330);
    print(head);
}