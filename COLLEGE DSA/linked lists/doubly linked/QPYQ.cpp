#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev; 
    
    node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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
        head->prev = temp;
        head = temp;
    }
}

void print(node*head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

node*swapps(node*head){
if (head == NULL || head->next == NULL)
        return head;
 
    // Fix the head and its next explicitly to
    // avoid many if else in while loop
    node *curr = head->next->next;
    node *prev = head;
    head = head->next;
    head->next = prev;
 
    // Fix remaining nodes
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        prev = curr;
        node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
     
    prev->next = curr;
 
    return head;
}

// }
// node* swapadj(node*head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node *i, *j;
//     // node *temp;
//     // temp = NULL;
//     i = head;
//     j = i->next->next;
//     node *k;
//     // node *x = i->next;
//     while(i!=NULL){
//         for (i = head; i != NULL; i = j){
//             k = i->next;
//             while(k!=NULL){
//                 swap(i->data, k->data);
//             }
//             k = k->next->next;
//         }
//     }
//     return head;
// }

// void bsort(node*&head){
//     node *i, *j;
//     i = head;
//     for (i = head; i != NULL; i = i->next){
//         j = i->next;
//         while (j != NULL){
//             if (i->data > j->data){
//                 swap(i->data, j->data);
//             }
//             j = j->next;
//         }
//     }
// }


int main(){
    node*head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    print(head);
    // // insertmid2(head, 3, 6);
    head = swapps(head);
    print(head);
}