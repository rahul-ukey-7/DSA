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
        vector<int> trav;
        postOrder(root,trav);
        return trav;
    }

    void postOrder(Node *root,vector<int> &trav)
    {
        if(root==NULL)
        {
            return;
        }

        for(Node *curr:root->children)
        {
            postOrder(curr,trav);
        }

        trav.push_back(root->val);
    }
};