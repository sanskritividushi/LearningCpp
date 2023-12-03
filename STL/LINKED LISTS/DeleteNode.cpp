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

    //destructor
    ~Node(){
        int value= this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }   
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head=temp;
}
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp ;
    tail=temp;
}

void InsertAtN(Node* &head,Node* &tail, int pos, int d){
    //insert at start
    if(head==NULL or pos==0){
        InsertAtHead(head, d);
        return;
    }

    
    Node* temp = head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count ++;
    }

     //insert at end 
    if(temp -> next== NULL){
        InsertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert= new Node(d);
    nodeToInsert->next = temp->next;
    temp-> next= nodeToInsert;
}

void deleteNode(Node* &head, int pos){
    //deleting first/start nnode
    if(pos==1){
        Node* temp=head;
        head=head->next;
        //memory free of start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting mid or last node
        Node* curr=head;
        Node* prev= NULL;

        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next= curr->next;
        curr->next=NULL;
        delete curr;
    }
}

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

    Node*head= n1;
    Node*tail= n1;
    print(head);

    InsertAtTail(tail, 20);
    print(head);

    InsertAtTail(tail, 330);
    print(head);

    // InsertAtN(head, 3, 777);
    // print(head);

    // InsertAtN(head, 1, 80);
    // print(head);

    InsertAtN(head,tail, 4, 54);
    print(head);

    deleteNode(head, 3);
    print(head);


    return 0;
}