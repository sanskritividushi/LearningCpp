//wap to perform poly addn subtrn and multiplication.read poly from user and print result
 
#include <iostream>
using namespace std;

class node{
    public:
    int coef;
    int exp;
    node *next;

    node(int c, int e){
        this->coef = c;
        this->exp = e;
        this->next = NULL;
    }
};

void inserthead(node*&head,int c, int e){
    if(head==NULL){
        head = new node(c, e);
        return;
    }
    node*temp = new node(c, e);
    // temp->coef = c;
    // temp->exp = e;
    temp->next=head;
    head = temp;
}
void inserttail(node*&head, int c, int e){
    if(head==NULL){
        head=new node(c,e);
        return;
    }

    node*tail= head;
    while(tail->next!=NULL){
        tail= tail->next;
    }
    tail->next=new node(c,e);
    return;
}
void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout << temp->coef << "x^" <<temp->exp <<" ->";
        temp=temp->next;
    }
    cout << endl;
}
void addn(node*&head1,node*&head2){

    if(head1==NULL && head2==NULL){
        return;
    }
  else if(head1->exp == head2->exp)
  {
    cout << head1->coef +  head2->coef << "x^" << head1->exp << "->";
    addn(head1->next,head2->next);
  }
  else if(head1->exp > head2->exp){
    cout  << head1->coef << "x^" << head1->exp << "-> ";
    addn(head1->next, head2);
  }
  else{
    cout  << head2->coef << "x^" << head2->exp << "-> ";
    addn(head1, head2->next);
  }
}

void subn(node*&head1,node*&head2){
    if(head1==NULL && head2==NULL){
        return;
    }
  else if(head1->exp == head2->exp){
    cout << head1->coef -  head2->coef << "x^" << head1->exp << "->";
    subn(head1->next,head2->next);
  }
  else if(head1->exp > head2->exp){
    cout  << head1->coef << "x^" << head1->exp << "-> ";
    subn(head1->next, head2);
  }
  else{
    cout  << head2->coef << "x^" << head2->exp << "-> ";
    subn(head1, head2->next);
  }
}

void mul(node*&head1,node*&head2){
    node*temp1=head1;
    node*temp2=head2;
    node *save = NULL;
    while(temp1!=NULL){
        while(temp2!=NULL){
            cout << temp1->coef * temp2->coef << "x^" << temp1->exp + temp2->exp << "->";
            // node*save = new node(temp1->coef*temp2->coef, temp1->exp+temp2->exp);
            // save->coef=temp1->coef*temp2->coef;
            // save->exp=temp1->exp+temp2->exp;
            temp2 = temp2->next;
        }
        temp2 = head2;
        temp1 = temp1->next;
    }

}
void mul1(node*&head1,node*&head2){
    node*temp1=head1;
    node*temp2=head2;
    node *save = NULL;
    while(temp1!=NULL){
        while(temp2!=NULL){
            // cout << temp1->coef * temp2->coef << "x^" << temp1->exp + temp2->exp << "->";
            // node*save = new node(temp1->coef*temp2->coef, temp1->exp+temp2->exp);
            save->coef=temp1->coef*temp2->coef;
            save->exp=temp1->exp+temp2->exp;
            cout << save->coef << "x^" << save->exp << "->";
            temp2 = temp2->next;
        }
        temp2 = head2;
        temp1 = temp1->next;
    }
}

int main(){
    node *head1 = NULL;
    inserttail(head1, 13, 6);
    inserttail(head1, 5, 4);

    node *head2 = NULL;
    inserttail(head2, 12, 6);
    inserttail(head2, 6, 4);

    print(head1);
    print(head2);

    addn(head1, head2);
    cout << endl;
    subn(head1, head2);
    cout << endl;
    mul(head1, head2);
    cout << endl;
    return 0;
}

