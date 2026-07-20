class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int n=s.length();
        int i,j;

        for(i=0;i<n;i++)
        {
            set<char> ans;

            for(j=i;j<n;j++)
            {
                if(ans.count(s[j]))
                {
                    break;
                }

                ans.insert(s[j]);

                count=max(count,j-i+1);
            }
        }

        return count;
    }
};