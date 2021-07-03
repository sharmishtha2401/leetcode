/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        post(root,res);
        return res;
    }
    
    void post(Node *root, vector<int>& res)
    {
        if(!root)
            return;
        for(Node *child:root->children)
        {
            post(child,res);
        }
        res.push_back(root->val);
    }
};