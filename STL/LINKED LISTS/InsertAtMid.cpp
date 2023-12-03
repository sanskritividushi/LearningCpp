#include <iostream>
using namespace std;

//inserting at mid 
//inserting on head and tail through mid 

class Node{
    public:
    int data; 
    Node * next;
    Node(int d){
        this-> data=d;
        this-> next=NULL;
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

void InsertAtN(Node* &tail, Node* &head,int pos, int d){
    //insert at start
    if(pos==1){
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

    InsertAtN(tail,head, 4, 54);
    print(head);




    return 0;
}