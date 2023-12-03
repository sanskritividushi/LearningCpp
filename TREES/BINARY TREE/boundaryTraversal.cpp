#include <iostream>
#include <queue>
using namespace std;
 
class sol{
    public:
    void traevrsalleft (node*root, vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
        traevrsalleft(root->left, ans);
        }
       else{
        traevrsalleft(root->right, ans);
        }
    }
    void traevrsalleaf (node*root, vector<int> &ans){
        //base
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.psuh_back(root->data);
            return;
        }
    }
    traevrsalleaf(root->left, ans);
    traevrsalleaf(root->right, ans);
} 
    void traevrsalright(node*root, vector<int> &ans){
        if((root==NULL)|| (root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
        traevrsalright(root->right, ans);
        }
        else{
        traevrsalright(root->left, ans);
        }
        ans.push_back(root->data);
    }

vector <int> boundary(node*root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    ans.push_back(root->data);
    traevrsalleft(root->left, ans);
    traevrsalleaf(root->left, ans);
    traevrsalleaf(root->right, ans);
    traevrsalright(root->right, ans); 
}