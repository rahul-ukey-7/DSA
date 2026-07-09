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
    vector<int> preorder(Node* root) {
        vector<int> trav;
        preOrder(root,trav);
        return trav;
    }

    void preOrder(Node *root,vector<int> &trav)
    {
        if(root==NULL)
        {
            return;
        }
        
        trav.push_back(root->val);

        for(Node *curr:root->children)
        {
            preOrder(curr,trav);
        }
    }
};