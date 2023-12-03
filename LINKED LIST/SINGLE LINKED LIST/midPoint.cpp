#include <iostream> 
using namespace std;
//iterate till L/2 out of length L
//use mid runner to reach in a single iteration 
//we'll keep 2 pointers one fast and othr slow. suppose fast is on speeed 2x and slow is on speed 1x. thus when fast reaxhes end, slow reaches  mid 
//fast mobves by 2 steps, slow moves by 1 step 

//in case of odd list, take fast and slow pointer at pos 1. 
//in case of even list , take slow at 1 and fast at 2

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

node* takeinput(){
    int d; 
    cin>>d;
    node*head= NULL;

    while(d!=-1){
        insertHead(head,d);
        cin>>d;
    }
    return head;
}


void print(node*head){ //passing by value 
    while(head!=NULL){
        cout << head-> data << "->" ; 
        head= head-> next;
    }
    cout <<endl;
}

void operator<<(ostream &os, node*head){ //os is another name for cout
    print(head);
    return;
}
void operator>>(istream &is, node*&head){
    head=takeinput();
    return;
}
node*midpoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*slow=head;
    node*fast=head;
    //fast!=null and fast->next != null is the condition for while 
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

//HAVE TO DO ISTREAM,OSTREAM INPLACE OF VOID 

int main(){
    node*head;
    cin>> head;
    cout << head; 

    node*mid=midpoint(head);
    cout << mid->data<< " ";
}