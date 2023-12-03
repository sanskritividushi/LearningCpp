#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    // int el;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insertAtHead(node*&head, int d){
    if(head==NULL){
            head = new node(d);
            return;
    }
    else{
        node*temp = new node(d);
        temp->next = head;
        head = temp;
    }
}

void print(node*head){
    if(head==NULL){
        cout << "empty" <<endl;
        return;
    }
    while(head!=NULL){
        cout<< head->data << " ";
        head = head->next;
    }
}

node*merge(node*&head1, node*&head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data <= head2->data){
        head1->next = merge(head1->next, head2);
        return head1;
    }
    else{
        head2->next = merge(head1, head2->next);
        return head2;
    }
}

node*getunion(node*&head1, node*&head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data <= head2->data){
        head1->next = getunion(head1->next, head2);
        return head1;
    }
    else{
        head2->next = getunion(head1, head2->next);
        return head2;
    }
}

int main(){
    node*head1 = NULL;
    insertAtHead(head1,8);
    insertAtHead(head1,7);
    insertAtHead(head1,6);
    insertAtHead(head1,5);
    print(head1);
    cout << endl;
    node*head2 = NULL;
    insertAtHead(head2,4);
    insertAtHead(head2,3);
    insertAtHead(head2,2);
    insertAtHead(head2,1);
    print(head2);
    cout << endl;

    node* newhead=merge(head1, head2);
    print(newhead);

    
//     // node *x = union1(head1, head2);
    // node*x=getunion(head1, head2);
    // print(x);
}