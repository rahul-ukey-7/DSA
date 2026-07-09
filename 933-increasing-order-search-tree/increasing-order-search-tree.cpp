class Solution {
public:
    void inorder(TreeNode* root, stack<int>& st)
    {
        if(root == NULL)
            return;

        inorder(root->right, st);
        st.push(root->val);
        inorder(root->left, st);
    }

    TreeNode* increasingBST(TreeNode* root) {
        stack<int> st;

        inorder(root, st);

        TreeNode* newRoot = new TreeNode(st.top());
        st.pop();

        TreeNode* curr = newRoot;

        while(!st.empty())
        {
            curr->right = new TreeNode(st.top());
            st.pop();
            curr = curr->right;
        }

        return newRoot;
    }
};