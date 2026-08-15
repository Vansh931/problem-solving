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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>v;
        queue<TreeNode*>q;
        v.push_back({root->val});
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int>level;
            while(s--){
                TreeNode* f = q.front();
                q.pop();
                if(f->left){
                    q.push(f->left);
                    level.push_back(f->left->val);
                }
                if(f->right){
                    q.push(f->right);
                    level.push_back(f->right->val);
                }
            }
            if(level.size()>0) v.push_back(level);
        }
        return v;
    }
};