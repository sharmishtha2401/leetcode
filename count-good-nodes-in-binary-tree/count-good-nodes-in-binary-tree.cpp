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
    int goodNodes(TreeNode* root, int m=-10000) {
        good=0;
        cal(root, -10000);
        return good;
    }
    
    void cal(TreeNode *root, int m)
    {
        if(!root)
            return;
        if(root->val>=m)
            good++;
        m=max(m, root->val);
        cal(root->left,m);
        cal(root->right,m);
        
    }
};