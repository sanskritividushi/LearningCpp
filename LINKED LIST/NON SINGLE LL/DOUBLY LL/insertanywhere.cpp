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
    if(head==NULL){
        node*temp = new node(d);
        head=temp;
    }
    else{
        node*temp= new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertattail(node*&tail, int d){
    if(tail==NULL){
        node*temp = new node(d);
        tail=temp;
    }
    else{
        node*temp= new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertanywhere(node*&head,node*&tail, int pos, int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    if(pos==getlen(head)+1){
        insertattail(tail,d);
        return;
    }
    int jump=1;
    node*temp=head;
    while(jump<pos-1){
        temp=temp->next;
        jump++;
    }
    node*nodeToInsert=new node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}

void insertanywhere2(node*&head,node*&tail, int pos, int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
    }

    node*nodeToInsert=new node(d);
    temp->next->prev=nodeToInsert;
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
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
    insertanywhere2(head,tail,3,40);
    print(head);
    cout << getlen(head);
}