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



bool isIdentical(node*root1, node*root2){
    //base case
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }

    bool left = isIdentical(root1->left, root2->left);
    bool right = isIdentical(root1->right, root2->right);
    bool value = root1->data == root2->data;

    if(left && right && value){
        return true;
    }
    return false;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    node*root1 = treeFromArr(a, 0, n-1);
    
    int b[] = {1, 2, 3, 4, 5, 6, 7};
    int m = 7;
    node*root2 = treeFromArr(b, 0, m-1);


    // node*root1=build_tree();
    // node*root2=build_tree();

    printAlllevel(root1);
    cout << endl;
    printAlllevel(root2);
    cout << endl;

    if(isIdentical(root1, root2)){
        cout << "Identical" << endl;
    }
    else{
        cout << "not identical" << endl;
    }
}
