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
void insertHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}

int len(node*head){
    int count=0; 
    while(head!=NULL){
        count++;
        head= head-> next;
    }
    return count;
}

void inserttail(node*&head, int d){
    if(head==NULL){
        head=new node(d);
        return;
    }

    node*tail= head;
    while(tail->next!=NULL){
        tail= tail->next;
    }
    tail->next=new node(d);
    return;
}
void insertmid(node*&head, int pos, int d){
    //corner case 
    if(head ==NULL or pos==0){
        insertHead(head, d);
        return;
    }
    else if(pos>len(head)){
        inserttail(head, d);
    }

    else{
        int jump=1;
        node*temp=head;
        while(jump<pos){
            temp=temp->next;
            jump++;
        }
        node*nodeToInsert=new node(d);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
    }
}
void print(node*head){ //passing by value 
    while(head!=NULL){
        cout << head-> data << "->" ; 
        head= head-> next;
    }
    cout <<endl;
}

int main(){
    node*head= NULL;
    insertHead(head,1);
    insertHead(head,2);
    insertHead(head,3);
    print(head);

    insertmid(head, 1, 777);
    // inserttail(head,7);
    print(head);

}