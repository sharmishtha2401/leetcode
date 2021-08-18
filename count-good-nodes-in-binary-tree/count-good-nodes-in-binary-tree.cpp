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
    int good;
    int goodNodes(TreeNode* root) {
        good=0;
        calc(root, -10000);
        return good;
    }
    
    void calc(TreeNode *root, int m)
    {
        if(!root)
            return;
        if(root->val>=m)
            good++;
        m=max(m,root->val);
        calc(root->left,m);
        calc(root->right,m);
    }
 
};