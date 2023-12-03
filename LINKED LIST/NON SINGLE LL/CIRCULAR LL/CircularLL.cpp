#include <iostream> 
using namespace std;

class node{
    public:
    int data; 
    node*next;

    node(int d){
        data=d;
        next= NULL;
    }
};
void insertAthead(node*&head, int data){
    node*n= new node(data);
    node*temp=head; 
    n->next=head;
    if(temp!=NULL){
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
    }
    else{
        n->next=n; 
    }
    head=n;
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
    node*head=NULL;
    insertAthead(head,10);
    insertAthead(head,50);
    insertAthead(head,70);
    insertAthead(head,40);
    insertAthead(head,90);
    print(head);
  
}