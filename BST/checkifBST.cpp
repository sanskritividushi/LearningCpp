#include <iostream>
#include <queue>
#include <climits>
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


bool isbst(node *root, int minV=INT_MIN, int maxV=INT_MAX){
    if (root==NULL){
        return true;
    }
    if (root->data<=minV || root->data>=maxV){
        return false;
    }
    return isbst(root->left, minV, root->data) && isbst(root->right, root->data, maxV);
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

    if(isbst(root)){
        cout << "bst" << endl;
    }
    else{
        cout << "not bst" << endl;
    }
    return 0;

}
