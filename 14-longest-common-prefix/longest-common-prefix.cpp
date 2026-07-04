class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int i,j;

        for(i=0;i<strs.size();i++)
        {
            j=0;

            while(j<ans.size() && j<strs[i].size() && ans[j]==strs[i][j])
            {
                j++;
            }

            ans=ans.substr(0,j);
        }

        return ans;
    }
};