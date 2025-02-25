/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    void fill(TreeNode* root, map<TreeNode*, TreeNode*>& mp, TreeNode* par) {
        if (!root) return;
        mp[root] = par; 
        cout<<mp[root]<<endl;
        fill(root->left, mp, root);
        fill(root->right, mp, root);
    }

    void solve(TreeNode* root, int k, unordered_map<TreeNode*, bool>& visit, vector<int>& ans, map<TreeNode*, TreeNode*>& mp) {
        if (!root || visit[root]) return; 
        visit[root] = true; 
        if (k == 0) {
            ans.push_back(root->val);
            return;
        }
        if (root->left) solve(root->left, k - 1, visit, ans, mp);
        if (root->right) solve(root->right, k - 1, visit, ans, mp);
        if (mp[root]) solve(mp[root], k - 1, visit, ans, mp);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, bool> visit; 
        vector<int> ans;                    
        map<TreeNode*, TreeNode*> mp;      
        fill(root, mp, nullptr); 
        solve(target, k, visit, ans, mp); 
        return ans; 
    }
};