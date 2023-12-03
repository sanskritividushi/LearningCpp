#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int d){
        this->data=d;  
        this->next=NULL;
    }
};

class stack{
public:
    node*top;
    int max;
    stack(){
        this->top = NULL;
    }

bool isempty(){
    if(top==NULL){
        return true;
    }
    return false;
}
void push(int d)
{
    if(top==NULL){
        top = new node(d);
        return;
    }
    node *temp = new node(d);
    temp->next = top;
    top = temp;
   
}
void pop(){
    if(isempty()){
        cout << "stack empty" << endl;
        return;
    }
    node *temp = top;
    top = top->next;
    cout << temp->data << endl;
    delete temp;
}

void displayStack(){
 if ( isempty())
  cout<<"Stack is Empty";

 else{
  node *temp=top;
  while(temp!=NULL){   
    cout<<temp->data<<" ";
    temp=temp->next;
  }
    cout<<endl;
 }
}


};


int main()
{
stack s;
s.push( 1);
s.push( 2);
s.push( 3);
s.push( 4);
s.push( 5);
s.push( 6);
s.push( 7);
s.push( 9);

// reverse(head);
s.displayStack();

s.pop();
s.pop();
s.pop();
return 0;
}