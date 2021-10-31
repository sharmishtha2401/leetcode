

class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)
            return;
        
        TreeNode *cur=root;
        
        while(cur)
        {
            if(cur->left)
            {
                TreeNode *pre=cur->left;
                while(pre->right)
                    pre=pre->right;
                
                pre->right=cur->right;
                cur->right=cur->left;
                cur->left=NULL;
            }
            cur=cur->right;
        }
    }
};