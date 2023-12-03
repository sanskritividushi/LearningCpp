//sorted ll needed 
#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data=d;
        left=NULL;
         right=NULL;
    }
};

void bfsLOT(node*root){
    queue<node*> q; 
    //datatype of queue isnt int because we need the address of the node or the node datatype to identify with node gets push, the data of node doesnt benefit us here
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *f = q.front();
        if(f==NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << f->data << " ";
            q.pop();

            if (f->left)
            {
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

node* insertInBST(node *root, int data){
    //base
    if (root==NULL){
        return new node(data);
    }
    //rec case insert in subtree
    if (data<=root->data){
        root->left= insertInBST(root->left, data);
    }
    else{
        root->right= insertInBST(root->right, data);
    }
    return root;
}

bool searchInBST(node *root, int data){
    if (root==NULL){
        return false;
    }
    if (data==root->data){
        return true;
    }
    if (data<=root->data){
        return searchInBST(root->left, data);
    }
    else{
        return searchInBST(root->right, data);
    } 
}
class pairLL{
    public:
    node* head;
    node* tail;
};
pairLL flatten(node *root)
{
    pairLL p; //pair of 2 pointers 
    p.head=NULL;
    p.tail=NULL;

    if(root==NULL){
        return p;
    }
    //leaf node
    if(root->left==NULL && root->right==NULL){
        p.head=p.tail=root;
        return p;
    }
    //left not null
    if(root->left!=NULL && root->right==NULL){
        pairLL leftll=flatten(root->left);
        leftll.tail->right=root;
        
        p.head=leftll.head;
        p.tail=root;
        return p;
    }
    //right not null
    if(root->left==NULL && root->right!=NULL){
        pairLL rightll=flatten(root->right);
        root->right = rightll.head;

        p.head = root;
        p.tail=rightll.tail;
        return p;
    }
    //both not null
    pairLL leftll=flatten(root->left);
    pairLL rightll=flatten(root->right);
    
    leftll.tail->right=root;
    root->right = rightll.head;

    p.head=leftll.head;
    p.tail=rightll.tail;
    return p;
}

node* build(){
    int d;
    cin>>d;
    node *root = NULL;
    while (d != -1)
    {
        root=insertInBST(root,d);
        cin >> d;
    }
    return root;
}
void inorder(node*root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    node*root = build();
    bfsLOT(root);
    cout << endl;

    pairLL p=flatten(root);
    node*temp=p.head;

    while(temp!=NULL){
        cout << temp->data << "-> ";
        temp=temp->right;
    }
    return 0;
}
