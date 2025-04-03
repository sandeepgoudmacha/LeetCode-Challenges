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

    vector<int> postorderTraversal(TreeNode* root) {
                    vector<int>v;

        if(root){
            stack<TreeNode*>st;
            // vector<int>v;
            TreeNode* lastVisited = nullptr;
            TreeNode* current=root;
            // st.push(root);
            while(!st.empty() || current!=NULL){
              while(current!=NULL){
                st.push(current);
                current=current->left;
              }

            TreeNode* topNode = st.top();              
             if (topNode->right && lastVisited != topNode->right) {
                current = topNode->right;
            } else {
                v.push_back(topNode->val);
                lastVisited = topNode;
                st.pop();
            }
            }
            
        }
        return v;
    }
};