#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* build_tree(){
    int d;
    cin >> d;

    if(d==-1){
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
int ht(node*root){
    if(root==NULL){
        return 0;
    }
    int ls= ht(root->left);
    int rs= ht(root->right);
    return max(ls, rs) + 1;
}
void printKthlevel(node*root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout << root->data << " ";
        return;
    }
    printKthlevel(root->left, k-1);
    printKthlevel(root->right, k-1);
    return;
}
void printAlllevel(node*root){
    int h = ht(root);
    for (int i=1; i<=h; i++){
        printKthlevel(root, i);
        cout << endl;
    }
}
node* treeFromArr(int*a, int s, int e){
    if(s>e){
        return NULL;
    }
    int mid= s+ ((e-s)/2);
    node *root = new node(a[mid]);
    root->left = treeFromArr(a, s, mid-1);
    root->right = treeFromArr(a, mid+1, e);
    return root;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    node*root = treeFromArr(a, 0, n-1);
    printAlllevel(root);
}
