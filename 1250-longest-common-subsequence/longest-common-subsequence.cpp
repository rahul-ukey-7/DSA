class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {

        int m=text1.length();
        int n=text2.length();

        int L[m+1][n+1];

        for(int i=0;i<=m;i++)
        {
            L[i][0]=0;
        }

        for(int i=0;i<=n;i++)
        {
            L[0][i]=0;
        }

        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    L[i][j]=L[i-1][j-1]+1;
                }
                else
                {
                    L[i][j]=max(L[i-1][j],L[i][j-1]);
                }
            }
        }

        return L[m][n];
    }
};