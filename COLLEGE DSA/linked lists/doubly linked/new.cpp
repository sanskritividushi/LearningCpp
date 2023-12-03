#include <iostream>
using namespace std;

// Write a menu driven program to perform the following ops on LL:
// 1. Insert- beginning , end, mid      DONE
// 2. Delete- beginning, end, mid       DONE 
//3. Search- linear                     DONE
// 4. Reverse- LL                       DONE
// 5. sorting- bubble sort              DONE
// 6. print/ traverse                   DONE
// 7. merge 2 sorted LL                 

class node{
public:
    int data;
    node* next;

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

void insertAtTail(node*&head, int d){
    if(head==NULL){
        head=  new node(d);
        return;
    }
    node *tail =head;
    while(tail->next!=NULL){
        tail= tail->next;
    }
    tail->next= new node(d);
    // return;
}
void insertAtMid(node*&head, int el, int d){ //el is the element after which we want to insert
    if(head==NULL){
        head = new node(d);
        return;
    }
    node*temp = head;
    while( temp!=NULL && temp->data!=el){
        temp= temp->next;
    }
    if(temp==NULL){
        cout << "not found" << endl;
    }
    else{
        node*nodeToInsert= new node(d);
        nodeToInsert->next= temp->next;
        temp->next= nodeToInsert;
    }
}

void insertmid2(node*&head, int pos, int d){
    if(head==NULL){
        head= new node(d);
        return;
    }
    int count = 1;
    node *temp = head;
    while(count<pos-1){
        temp= temp->next;
        count++;
    }
    node *nn = new node(d);
    nn->next = temp->next;
    temp->next = nn;
}
void reverse(node*&head){
    node* c=head;
    node* p=NULL;
    node*N;
    while(c!=NULL){
        N=c->next;
        c->next=p;
        p=c; 
        c=N;
    }
    head=p;
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

void deleteStart(node*&head){
    if(head==NULL){
        cout << "head is empty" << endl;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL){
        node*x =temp->next;
        // temp->next = head;
        delete temp;
        head = x;
    }
}

void deleteEnd(node*&head){
    if(head==NULL){
        return;
    }
    node *tail=head;
    while(tail->next!=NULL){
        tail= tail->next;
    }
    delete tail; 
}
int len(node*head){
    int count=0; 
    while(head!=NULL){
        count++;
        head= head-> next;
    }
    return count;
}
void deleteMid(node*&head, int pos){
    if(head==NULL){
        return;
    }
    if(pos==1){
        deleteStart(head);
    }
    if(pos==len(head)){
        deleteEnd(head);
    }

    node *temp = head;
    int count=1;
    while(temp!=NULL && count!=pos-1){
        temp= temp->next;
        count++;
    }
    if(temp==NULL){
        cout << "not found" << endl;
    }
    else{
        node *x= temp->next;
        temp->next= x->next;
        delete x;
    }    
}


void bsort(node*&head){
    node *i, *j;
    i = head;
    for (i = head; i != NULL; i = i->next){
        j = i->next;
        while (j != NULL){
            if (i->data > j->data){
                swap(i->data, j->data);
            }
            j = j->next;
        }
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
void reverseTraversal(node* head) {
    if (head == NULL) {
        return;  // Base case: reached the end of the list
    }

    // Recursively traverse the rest of the list
    reverseTraversal(head->next);

    // Print the current node's data
    cout << head->data << " ";
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

int main(){
    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    print(head);
    cout << endl;
    reverseTraversal(head);
    cout << endl;
}

// int main(){
//     node *head = NULL;
//     int choice;
//     cout << "1= Insert, 2=Delete, 3=Search, 4=print, 5=reverse, 6=bubble sort, 7=merge 2 linked list" << endl;
//     cin >> choice;
    
//     if(choice==1){
//         node *head = NULL;
//         insertAtHead(head,1);
//         insertAtHead(head,2);
//         insertAtHead(head,3);
//         insertAtTail(head,4);
//         insertAtTail(head,5);
//         insertmid2(head,3,6);
//         print(head);
//         cout << endl;
//     }
//     else if(choice ==2){
//         node *head = NULL;
//         insertAtHead(head,1);
//         insertAtHead(head,2);
//         insertAtHead(head,3);
//         insertAtTail(head,4);
//         insertAtTail(head,5);
//         insertmid2(head,3,6);
//         deleteStart(head);
//         deleteMid(head,3);
//         deleteEnd(head);
//         print(head);
//         cout << endl;
//     }
//     else if(choice ==3){
//         node *head = NULL;
//         insertAtHead(head,1);
//         insertAtHead(head,2);
//         insertAtHead(head,3);
//         insertAtTail(head,4);
//         insertAtTail(head,5);
//         insertmid2(head,3,6);
//         deleteStart(head);
//         deleteMid(head,3);
//         deleteEnd(head);
        
//         cout << search(head, 6) << endl;
//         cout << endl;
//     }
//     else if(choice ==4){
//         node *head = NULL;
//         insertAtHead(head,1);
//         insertAtHead(head,2);
//         insertAtHead(head,3);
//         insertAtTail(head,4);
//         insertAtTail(head,5);
//         insertmid2(head,3,6);
//         deleteStart(head);
//         deleteMid(head,3);
//         deleteEnd(head);
//         reverse(head);
//         print(head);
//         cout << endl;
//     }
//     else if(choice ==5){
//         node *head = NULL;
//         insertAtHead(head,1);
//         insertAtHead(head,2);
//         insertAtHead(head,3);
//         insertAtTail(head,4);
//         insertAtTail(head,5);
//         insertmid2(head,3,6);
//         deleteStart(head);
//         deleteMid(head,3);
//         deleteEnd(head);
//         reverse(head);
//         print(head);
//         cout << endl;
//     }
//     else if(choice ==6){
//         node *head = NULL;
//         insertAtHead(head,1);
//         insertAtHead(head,2);
//         insertAtHead(head,3);
//         insertAtTail(head,4);
//         insertAtTail(head,5);
//         insertmid2(head,3,6);
//         deleteStart(head);
//         deleteMid(head,3);
//         deleteEnd(head);
//         bsort(head);
//         print(head);
//         cout << endl;
//     }
//     else{
//         node *head1 = NULL;
//         insertAtHead(head1,1);
//         insertAtHead(head1,2);
//         insertAtHead(head1,3);
//         insertAtTail(head1,4);
//         insertAtTail(head1,5);
//         insertmid2(head1,3,6);
//         node *head2 = NULL;
//         insertAtHead(head2,1);
//         insertAtHead(head2,2);
//         insertAtHead(head2,3);
//         insertAtTail(head2,4);
//         insertAtTail(head2,5);
//         insertmid2(head2,3,6);
//         node *head3 = merge(head1, head2);
//         print(head3);
//         cout << endl;
//     }

//     return 0;
// }




 
