class Solution {
public:
    vector<int> countBits(int n) {
            vector<int> ans;

            for(int i=0;i<=n;i++)
            {
                if(i==0)
                {
                    ans.push_back(0);
                }
                else if(i==1)
                {
                    ans.push_back(1);
                }
                else
                {
                    int count=0;
                    int p=i;

                    while(p)
                    {
                        if(p%2!=0)
                        {
                            count++;
                        }
                        p=p/2;
                    }

                    ans.push_back(count);
                }
            }

            return ans;
    }
};