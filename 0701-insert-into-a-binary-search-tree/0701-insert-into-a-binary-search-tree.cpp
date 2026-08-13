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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        if(root==NULL) return newNode;
        TreeNode* c = root;
        while(c!=NULL){
            if(val<c->val){
                if(c->left!=NULL){
                    c=c->left;
                }
                else{
                    c->left=newNode;
                    break;
                }
            }
            if(val>c->val){
                if(c->right!=NULL){
                    c=c->right;
                }
                else{
                    c->right=newNode;
                    break;
                }
            }
        }
        return root;
    }
};