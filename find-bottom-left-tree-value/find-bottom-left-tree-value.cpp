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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)
            return NULL;
        int v=root->val;
        int max=0;
        bottomLeft(root, v, max, 0);
        return v;
    }
    
    void bottomLeft(TreeNode *root, int& v, int& max, int depth)
    {
        if(!root)
            return;
        bottomLeft(root->left, v, max, depth+1);
        bottomLeft(root->right, v, max, depth+1);
        if(depth>max)
        {
            max=depth;
            v=root->val;
        }
    }
    
};