#include <iostream>
using namespace std;

class node{
public:
    char data;
    node* left;
    node* right;

    node(char d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* build_tree(){
    char d;
    cin >> d;

    if(d=='$'){
        return NULL;
    }
    node*root = new node(d);
    root->left = build_tree();
    root->right = build_tree();
    return root;
}

void print(node*root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
void printInorder(node*root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPostorder(node*root){
    if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int main(){
    node *root = build_tree();
    print(root);
    cout << endl;
    printInorder(root);
    cout << endl;
    printPostorder(root);
    cout << endl;
    return 0;
}