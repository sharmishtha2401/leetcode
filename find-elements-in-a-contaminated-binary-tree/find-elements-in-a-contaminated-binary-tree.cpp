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
class FindElements {
public:
    TreeNode *head;
    FindElements(TreeNode* root) {
        recover(root,0);
        head=root;
    }
    
    void recover(TreeNode *root, int x)
    {
        if(!root)
            return;
        root->val=x;
        recover(root->left, 2*x+1);
        recover(root->right, 2*x+2);
    }
    
    bool find(int target) {
        return get(target,head);
    }
    
    bool get(int target, TreeNode *head)
    {
        if(head==NULL)
            return false;
        if(head->val==target)
            return true;
        bool t1=get(target, head->left);
        bool t2=get(target, head->right);
        
        if(t1 || t2)
            return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */