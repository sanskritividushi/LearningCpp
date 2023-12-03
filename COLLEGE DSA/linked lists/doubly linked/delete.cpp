#include <iostream>
using namespace std;

class node
{
    public:

    node *prev;
    int data;
    node *next;

};

void inserthead(node*&head, node *&tail, int data){
    node *n = new node();
    n->prev = NULL;
    n->data = data;
    n->next = head;
    if(head==NULL){
        tail = n;
    }
    else{
        head->prev = n;
    }
    head = n;
}


void deletehead(node*&head, node*&tail){
    if(head==NULL){
        return;
    }
    node *temp = head;
    if(head==tail){
        head = tail = NULL;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }
    cout << "deleting" << endl;
    delete temp;
}
void deleteend(node*&head, node*&tail){
    if(head==NULL){
        return;
    }
    node *temp = tail;
    if(head==tail){
        head = tail = NULL;
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
    }
    cout << "deleting" << endl;
    delete temp;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){
    node *head = NULL;
    node *tail = NULL;
   
    inserthead(head, tail, 10);
    inserthead(head, tail, 20);
    inserthead(head, tail, 30);
    inserthead(head, tail, 60);
    inserthead(head, tail, 50);
    inserthead(head, tail, 40);
    print(head);
    deletehead(head, tail);
    print(head);
    deleteend(head, tail);
    print(head);
}