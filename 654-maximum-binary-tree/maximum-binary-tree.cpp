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
    TreeNode* solve(vector<int> nums,int low,int high)
    {
        if(low>high)
        {
            return NULL;
        }
        int i;
        int n=nums.size();
        int maxIndex=low;

        for(i=low;i<=high;i++)
        {
            if(nums[i]>nums[maxIndex])
            {
                maxIndex=i;
            }
        }


        TreeNode *root;
        root=new TreeNode(nums[maxIndex]);

        root->left=solve(nums,low,maxIndex-1);
        root->right=solve(nums,maxIndex+1,high);
        
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return solve(nums,0,nums.size()-1);

    }
};