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

    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return {};
        TreeNode* c = root;
        while(c!=NULL){
            if(c->val==val){
                break;
            }
            else if(c->val<val){
                c=c->right;
            }
            else{
                c=c->left;
            }
        }
        return c;
    }
};