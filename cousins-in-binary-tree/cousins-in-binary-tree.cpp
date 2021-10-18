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
    int xdepth=0, ydepth=0, xparent, yparent;
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x || root->val==y)
            return false;
        
        check_depth(root, x, y, 0, 0);
        
        if(xdepth==ydepth && xparent!=yparent)
            return true;
        return false;
    }
    
    void check_depth(TreeNode *root, int x, int y, int depth, int parent)
    {
        if(!root)
            return;
        if(root->val==x)
        {
            xdepth=depth;
            xparent=parent;
            return;
        }
        
        if(root->val==y)
        {
            ydepth=depth;
            yparent=parent;
            return;
        }
        
        check_depth(root->left, x, y, depth+1, root->val);
        check_depth(root->right, x, y, depth+1, root->val);
        
    }
};