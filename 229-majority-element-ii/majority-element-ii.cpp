class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int k=n/3;

        unordered_map<int,int> H;

        for(int x: nums)
        {
            H[x]++;
        }

        for(auto x: H)
        {
            if(x.second>k)
            {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};