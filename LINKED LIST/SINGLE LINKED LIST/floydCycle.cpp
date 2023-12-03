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

node* merge(node*a, node*b){
    //bqse cqase
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    //take head pointer 
    node*c;
    if(a->data < b->data){
        c=a;
        c->next= merge(a->next, b);
    }
    else{
        c=b;
        c->next= merge(a ,b->next);
    }
    return c;
}
// bool detectCycle(node*head){
//     node*slow=head;
//     node*fast=head;

//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             cout << "true" <<endl;
//             return true;
//         }
//     }
//     cout << "false" <<endl;
//     return false;
// }

void detectanddeleteloop(node*head){
    // If list is empty or has only one node without loop
    if (head == NULL || head->next == NULL)
        return;
 
    node *slow = head, *fast = head;
 
    // Move slow and fast 1 and 2 steps ahead respectively.
    slow = slow->next;
    fast = fast->next->next;
 
    // Search for loop using slow and fast pointers
    while (fast && fast->next) {
        if (slow == fast)
            cout <<"true" <<endl;
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
 
    /* If loop exists */
    if (slow == fast) {
        slow = head;
 
        // this check is needed when slow and fast both meet
        // at the head of the LL eg: 1->2->3->4->5 and then
        // 5->next = 1 i.e the head of the LL
        if (slow == fast)
            while (fast->next != slow)
                fast = fast->next;
        else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        /* since fast->next is the looping point */
        fast->next = NULL; /* remove loop */
    }
}
int main(){
    node*head;
    cin>> head;
    cout << head;
    head->next->next->next->next->next= head;
    // detectCycle(head);
    detectanddeleteloop(head);

}