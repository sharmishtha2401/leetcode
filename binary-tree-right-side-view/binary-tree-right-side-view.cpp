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
    vector<int> rightSideView(TreeNode* root) {
        vector <int> res;
        rightSide(root,1,res);
        return res;
    }
    
    void rightSide(TreeNode *root, int level, vector<int>& res)
    {
        if(!root)
            return;
        if(res.size()<level)
            res.push_back(root->val);
        rightSide(root->right, level+1, res);
        rightSide(root->left, level+1, res);
    }
};