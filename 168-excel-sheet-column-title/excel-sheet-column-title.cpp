class Solution {
public:
    string ans="";
    char H[27];

    void solve(int n)
    {
        if(n==0)
        {
            return;
        }

        int rem=n%26;
        int quo=n/26;

        if(rem==0)
        {
            rem=26;
            quo--;
        }

        solve(quo);

        ans+=H[rem];

    }
    string convertToTitle(int columnNumber) {
        

        for(int i=1;i<27;i++)
        {
            H[i]='A'+i-1;
        }

        solve(columnNumber);

        return ans;
    }
};