class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int>& candidates, int remainingtarget,int index,int n,vector<int>& curr)
    {
        if(remainingtarget==0)
        {
            result.push_back(curr);
            return;
        }

        if(remainingtarget<0)
        {
            return;
        }

        for(int i=index;i<n;i++)
        {
            curr.push_back(candidates[i]);
            solve(candidates,remainingtarget-candidates[i],i,n,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        int n=candidates.size();
        int sum=0;

        solve(candidates,target,0,n,curr);

        return result;
    }
};