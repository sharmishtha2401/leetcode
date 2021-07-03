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
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> res;
        preorder(root,res);
        sort(res.begin(),res.end());
        for(int i=1; i<res.size();i++)
        {
            if(res[i]!=res[i-1])
            {
                return res[i];
            }
        }
        return -1;
        
    }
    
    void preorder(TreeNode *root, vector<int>& res)
    {
        if(!root)
            return;
        res.push_back(root->val);
        preorder(root->left,res);
        preorder(root->right,res);
    }
};