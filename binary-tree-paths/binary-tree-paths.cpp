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
    string line="";
    vector<string> paths;
    vector<string> binaryTreePaths(TreeNode* root) {
        allpaths(root, paths, line);
        return paths;
    }
    
    void allpaths(TreeNode *root, vector<string>& paths, string line)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
        {
            line+=to_string(root->val);
            paths.push_back(line);
        }
        line+=to_string(root->val);
        line+="->";
        allpaths(root->left, paths, line);
        allpaths(root->right, paths, line);
    }
};