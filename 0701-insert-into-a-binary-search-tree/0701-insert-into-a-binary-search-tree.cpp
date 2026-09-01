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
    void insert(TreeNode* root, int val,TreeNode* t) {
        if(root->left==NULL||root->right==NULL){
            if(root->val<val){
                if(!root->right){
                    root->right = t;
                    return;
                }
            }
            else if(root->val>val){
                if(!root->left){
                    root->left = t;
                    return;
                }
            }
        }
        insert(root->val>val?root->left:root->right,val,t);

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* t = new TreeNode(val);
        if(root==NULL){
            return t;
        }
        insert(root,val,t);
        return root;
    }
};