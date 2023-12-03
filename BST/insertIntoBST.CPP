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

    inorder(root);
    cout << endl;
    
    bfsLOT(root);
    cout << endl;

    return 0;

}
