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
    int cur=0;
    int sumNumbers(TreeNode* root) {
        sumnum(root,0);
        return sum;
    }
    
    void sumnum(TreeNode *root, int cur)
    {
        cur=cur*10+root->val;
        if(!root->left && !root->right)
            sum+=cur;
        if(root->left)
            sumnum(root->left, cur);
        if(root->right)
            sumnum(root->right, cur);
    }
};