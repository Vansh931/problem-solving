/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool a = true;
    void sym1(TreeNode*p,TreeNode*q){
        if(p==NULL&&q==NULL) return;
        else if(p==NULL||q==NULL){
        a= false;
        return;
        }
        else if(p->val!=q->val) a= false;
        sym1(p->left,q->right);
        sym1(p->right,q->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        else if(root->left==NULL&&root->right==NULL) return true;
        else if(root->left==NULL||root->right==NULL) return false;
        sym1(root->left,root->right);
        return a;
    }
};