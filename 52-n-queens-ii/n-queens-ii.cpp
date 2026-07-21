class Solution {
public:
    int count=0;
    int x[10];

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
                    count++;
                    return;
                }

                solve(k+1,n);
            }
        }
    }

    int totalNQueens(int n) {
        int k=1;

        solve(k,n);

        return count;
    }
};