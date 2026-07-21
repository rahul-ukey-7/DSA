class Solution {
public:
    int x[10];
    vector<vector<string>> ans;
    void show(int A[],int n)
    {
        vector<string> ans1;
        for(int i=1;i<=n;i++)
        {
            
            string temp="";

            for(int j=1;j<=n;j++)
            {
                if(A[i]==j)
                {
                    temp+='Q';
                }
                else
                {
                    temp+='.';
                }
            }
            ans1.push_back(temp);
        }

        ans.push_back(ans1);
    }
    bool isvalid(int k,int l)
    {
        for(int i=1;i<k;i++)
        {
            if(x[i]==l || abs(i-k)==abs(x[i]-l))
            {
                return false;
            }
        }
        return true;
    }
    void solve(int k,int n)
    {
        for(int i=1;i<=n;i++)
        {
            if(isvalid(k,i))
            {
                x[k]=i;

                if(k==n)
                {
                    show(x,n);
                    return;
                }

                solve(k+1,n);
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        int k=1;

        solve(k,n);

        return ans;
    }
};