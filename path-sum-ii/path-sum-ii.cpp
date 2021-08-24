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
    
    vector<int> v;
    vector<vector<int>> path;
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        sumpath(root, path, v, target);
        return path;
    }
    
    void sumpath(TreeNode *root, vector<vector<int>>& path, vector<int>& v, int target)
    {
        if(!root)
            return;
        v.push_back(root->val);
        if(!root->left && !root->right && root->val-target==0)
        {
            path.push_back(v);
        }
        
        sumpath(root->left, path, v, target-root->val);
        sumpath(root->right, path, v, target-root->val);
        v.pop_back();
    }
};