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
int dia(node*root){
    if(root==NULL){
        return 0;
    }
    int ls= ht(root->left); //h1 
    int rs= ht(root->right); //h2
    int op1 = ls + rs;
    int op2 = dia(root->left);
    int op3= dia(root->right);

    return max(op1,max(op2, op3));
}
// class Pair{
//     public:
//     int height;
//     int diameter;
// };

// Pair diameter1(node *root) //optimised 
// {
//     Pair p;
//     if(root==NULL){
//         p.diameter = p.height=0;
//         return p;
//     }
//     Pair left = diameter1(root->left);
//     Pair right = diameter1(root->right);

//     p.height = max(left.height, right.height) + 1;
//     p.diameter =max(left.height + right.height , max(left.diameter, right.diameter));
//     return p;
// }
// node* treeFromArr(int*a, int s, int e){
//     if(s>e){
//         return NULL;
//     }
//     int mid= s+ ((e-s)/2);
//     node *root = new node(a[mid]);
//     root->left = treeFromArr(a, s, mid-1);
//     root->right = treeFromArr(a, mid+1, e);
//     return root;
// }

node* inprebuild(int *in,int *pre, int s, int e){
    static int i = 0;
    //base
    if(s>e){
        return NULL;
    }
    //rec
    node*root= new node(pre[i]);

    int index = -1;
    for (int j = s; s <= e; j++){
        if(in[j]==pre[i]){
            index = j; 
            break;
        }
    }

    i++;
    root->left = inprebuild(in, pre, s, index - 1);
    root->right=inprebuild(in, pre, index+1, e);
    return root;
}
int main(){
    int in[] = {3,2,8,4,1,6,7,5};
    int pre[]= {1,2,3,4,8,5,6,7};
    int n = sizeof(in) / sizeof(int);
    node*root = inprebuild(in,pre, 0, n-1);
    printAlllevel(root);

    return 0;
}
