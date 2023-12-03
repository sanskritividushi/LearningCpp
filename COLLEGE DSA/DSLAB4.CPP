#include <iostream>
using namespace std;

// Write a menu driven program to perform the following ops on DLL:
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

void insertattail(node*&head, int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    else{
        node*tail= head;
        while(tail->next!=NULL){
            tail= tail->next;
        }
        node *temp = new node(d);
        tail->next = temp;
        temp->prev=tail;
        tail=temp;
    }
}
void iend(node*&head, int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    else{
        node*temp= head;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        node *nn = new node(d);
        temp->next=nn;
        nn->prev=temp;
    }
}
void insertanywhere(node*&head,node*&tail, int pos, int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    if(pos==getlen(head)+1){
        insertattail(head,d);
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

void reverse(node*&head)
{
    node* temp = NULL;
    node* curr = head;

    while (curr != NULL) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if (temp != NULL)
        head = temp->prev;
}
void deletehead(node*&head){
    if(head==NULL){
        cout << "list empty" << endl;
        return;
    }
    else{
        node*temp=head;
        head=head->next;
        delete temp;
    }
}
void deletetail(node*&head){
    if(head==NULL){
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    delete tail;
}

void deletemid(node*&head, int pos){
    if(pos==1){
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node *temp = head;
        int cnt = 1;
        while(cnt<pos-1){
            temp = temp->next;
            cnt++;
        }
        node *x = temp->next;
        temp->next = x->next;
        x->next->prev = temp;
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
                // swap(i->data, j->data);
                int d = i->data;
                i->data = j->data;
                j->data = d;
            }
            j = j->next;
        }
    }
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

// node*mergell(node*&head1, node*&head2){
//     node* temp1 = head1;
//     node* temp2 = head2;
//     node *next1 = temp1->next;
//     node *next2 = temp2->next;
//     node *head3 = NULL;
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     while(next1!=NULL && temp2!=NULL){
//         if((temp2->data >= temp1->data) && (temp2->data<=next1->data)) {
//             temp1->next = temp2;
//             next2=temp2->next;
//             temp2->next = next1;
//     }
// }
// }

int main(){
    node* n1= new node(90);
    node* head= n1;
    node* tail= n1;
    print(head);

    insertattail(head,60);
    print(head);
    insertattail(head,70);
    print(head);

    iend(head,40);
    print(head);

    bsort(head);
    print(head);

    // deletemid(head,3);
    // cout << getlen(head) << endl;
    // reverse(head);
    // print(head);

    // deletehead(head);
    // print(head);
    // deletetail(head);
    // print(head);
    // cout << search(head,10)<< endl;
    // bsort(head);
    // print(head);
}