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
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)
            return 0;
        vector<int> res;
        change(root,res);
        sort(res.begin(),res.end());
        int min=res[1]-res[0];
        for(int i=2; i<res.size();i++)
        {
            if(res[i]-res[i-1]<min)
                min=res[i]-res[i-1];
        }
        return min;
    }
    
    void change(TreeNode *root, vector<int>& res)
    {
        if(!root)
            return;
        change(root->left,res);
        change(root->right,res);
        res.push_back(root->val);
    }
};