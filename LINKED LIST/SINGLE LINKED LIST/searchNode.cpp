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

void print(node*head){ //passing by value 
    while(head!=NULL){
        cout << head-> data << "->" ; 
        head= head-> next;
    }
    cout <<endl;
}

bool search(node*head, int key){
    node*temp= head;
    while(temp!=NULL){
        if(head->data== key){
            return true;
        }
        head=head->next;
    }
    return false;
}

bool searchRecursive(node*head, int key){
    if(head==NULL){
        return false;
    }
    //recursive case 
    if(head->data== key){
        return true;
    }
    else{
        return searchRecursive(head->next, key);
    }
}
int main(){
    node*head= NULL;
    insertHead(head,1);
    insertHead(head,2);
    insertHead(head,3);
    print(head);
    
    if(search(head, 2)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

    

}