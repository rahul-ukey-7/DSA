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
    int height(TreeNode* root)
    {
        int x;
        int y;

        if(root!=NULL)
        {
            x=height(root->left);
            y=height(root->right);

            if(x>y)
            {
                return x+1;
            }
            else
            {
                return y+1;
            }
        }
            return 0;
    }

    int balancefactor(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }

        return height(root->left)-height(root->right);
    }
    bool isBalanced(TreeNode* root) {
        if(balancefactor(root)>1 || balancefactor(root)<-1)
        {
            return false;
        }

        if(root==NULL)
        {
            return true;
        }

        bool x=isBalanced(root->left);
        bool y=isBalanced(root->right);

        return x && y;
    }
};