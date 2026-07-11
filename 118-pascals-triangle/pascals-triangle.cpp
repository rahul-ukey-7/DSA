class Solution {
public:
    int nCr(int n, int r) 
    {
        if(r > n) return 0;
        r=min(r, n - r);

        int ans=1;
        for(int i=1; i<=r;i++)
            ans=ans*(n - r + i)/i;

        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=1;
        ans.push_back({1});
        vector<int> temp;
        while(n<numRows)
        {
            int i=0;
            while(i<=n)
            {
                temp.push_back(nCr(n,i));
                i++;
            }
            ans.push_back(temp);
            temp.clear();

            n++;
        }

        return ans;
    }
};