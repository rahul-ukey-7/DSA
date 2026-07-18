class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<int>& temp, int index)
    {
        if(index == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        // Include current element
        temp.push_back(nums[index]);
        solve(nums, temp, index + 1);

        // Backtrack
        temp.pop_back();

        // Exclude current element
        solve(nums, temp, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<int> temp;

        solve(nums, temp, 0);

        return ans;
    }
};