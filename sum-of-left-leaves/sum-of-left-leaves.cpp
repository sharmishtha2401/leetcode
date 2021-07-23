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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        left(root);
        return sum;
    }
    
    void left(TreeNode *root)
    {
        if(!root)
            return;
        if(root->left && !root->left->left && !root->left->right)
            sum+=root->left->val;
        left(root->left);
        left(root->right);
    }
};