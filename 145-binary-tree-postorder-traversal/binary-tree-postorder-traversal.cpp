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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        long int temp;

        while(root!=NULL || !st.empty())
        {
            if(root!=NULL)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                temp=(long int)st.top();
                st.pop();

                if(temp>0)
                {
                    st.push((TreeNode *)-temp);
                    root=((TreeNode *)temp)->right;
                }
                else
                {
                    ans.push_back(((TreeNode *)-temp)->val);
                    root=NULL;
                }
            }
        }

        return ans;
    }
};