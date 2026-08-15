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
 queue<int>q;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>ans;
        ans.push_back({root->val});
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int>l;
            stack<TreeNode*>st;
            while(s--){
                TreeNode*f = q.front();
                q.pop();
                if(f->right){
                    l.push_back(f->right->val);
                    st.push(f->right);
                }
                if(f->left){
                    l.push_back(f->left->val);
                    st.push(f->left);
                }
            }
            while(!st.empty()){
                q.push(st.top());
                st.pop();
            }
            if(l.size()>0)ans.push_back(l);
            if(q.empty())break;
            else s= q.size();
            l.clear();
            while(s--){
                TreeNode*f = q.front();
                q.pop();
                if(f->left){
                    l.push_back(f->left->val);
                    st.push(f->left);
                }
                if(f->right){
                    l.push_back(f->right->val);
                    st.push(f->right);
                }
            }
            while(!st.empty()){
                q.push(st.top());
                st.pop();
            }
            if(l.size()>0) ans.push_back(l);
        }
        return ans;
    }
};