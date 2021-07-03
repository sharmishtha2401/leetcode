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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        push(root1, res);
        push(root2, res);
        sort(res.begin(), res.end());
        return res;
        
    }
    void push(TreeNode *root, vector<int>& res)
    {
        if(root==NULL)
            return;
        push(root->left, res);
        res.push_back(root->val);
        push(root->right, res);
        
    }
};