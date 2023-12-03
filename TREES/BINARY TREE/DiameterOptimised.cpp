//GFG DIAMETER OF TREE CODE

#include <iostream>
using namepsace std;

pair <int, int> optiDia(node*root){
    if(root==NULL){
        pair <int, int> p=make_pair(0, 0);
        return p;
    }
    pair <int, int> left = optiDia(root->left);
    pair <int, int> right = optiDia(root->right);

    int op1 = left.first;
    int op3 = left.second + right.second + 1;
    int op2 = right.first;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second)+ 1;

    return ans;
}

int diamReturn(node*root){
    return optiDia(root).first;
}