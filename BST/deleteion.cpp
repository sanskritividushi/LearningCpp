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

node*deletebst(node *root, int data){
    if(root==NULL){
        return NULL;
    }
    else if (data<root->data){
        root->left= deletebst(root->left, data);
        return root;
    }
    else if (data==root->data){
        //found the node to delete in 3 cases
        //1. node w 0 chulldren 
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //2. 1 child
        if(root->left!=NULL && root->right==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        //3. 1 children
        if(root->right!=NULL && root->left==NULL){
            node*temp=root->right;
            delete root;
            return temp;   
        }

        //3. 2 childeren
        node*replace= root->right;
        while(replace->left!=NULL){
            replace= replace->left;
        }
        root->data= replace->data;
        root->right= deletebst(root->right, replace->data);
        return root;
    }

    else{
        root->right= deletebst(root->right, data);
        return root;
        }
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

    int s;
    cin >> s;

    root=deletebst(root,s);
    inorder(root);
    cout << endl;
    cout << "after deleting , bfs is: " << endl;
    bfsLOT(root);

    return 0;

}
