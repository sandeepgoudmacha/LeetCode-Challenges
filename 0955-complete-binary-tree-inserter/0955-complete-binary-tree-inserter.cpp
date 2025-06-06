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
class CBTInserter {
public:
    TreeNode* root;
    deque<TreeNode*> p;
    deque<TreeNode*> q;

    CBTInserter(TreeNode* root1) {
        root = root1;
        p.push_back(root);

        while(!p.empty())
        {
            TreeNode *x = p.front();
            p.pop_front();
            q.push_back(x);

            if(x->left){
               p.push_back(x->left);
            } 
            if(x->right){
               p.push_back(x->right);
            }
        }
    }
    
    int insert(int val) {

        TreeNode* y = new TreeNode(val);
        int flag = -1;

        while(!q.empty() && flag==-1)
        {
            TreeNode* x = q.front();

            if(x->left==nullptr)
            {
                x->left = y;
                q.push_back(y);
                flag = x->val;
            }

            else if(x->right==nullptr)
            {
                x->right = y;
                q.push_back(y);
                flag = x->val;
            }

            if(x->left && x->right){
                q.pop_front();
            }
        }

        return flag;
    }
    
    TreeNode* get_root() {
        return root;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */