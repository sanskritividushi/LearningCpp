#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*next;
        node*prev;

        node(int d){
            this->data =d; 
            this->next=NULL;
            this->prev=NULL;
        }
};

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int getlen(node*head){
    int cnt=0;
    node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insertathead(node*&head, int d){
    node*temp= new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertattail(node*&tail, int d){
    node*temp= new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
int main(){
    node* n1= new node(10);
    node* head= n1;
    node* tail= n1;
    print(head);

    insertathead(head,20);
    print(head);
    insertattail(tail,30);
    print(head);
    cout << getlen(head);
}