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
    
    int d=0;
    int diameterOfBinaryTree(TreeNode* root) {
        calc(root);
        return d;
    }
    
    int calc(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int ld=calc(root->left);
        int rd=calc(root->right);
        d=max(d, ld+rd);
        return max(ld, rd)+1;
    }
};