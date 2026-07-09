class Solution {
public:
    void solve(vector<int> &digits,vector<int> &temp,vector<int> &used,set<int> &ans,int k)
    {
        if(k==3)
        {
            if(temp[0]!=0 && temp[2]%2==0)
            {
                int num=temp[0]*100+temp[1]*10+temp[2];

                ans.insert(num);
            }
            return;
        }

        for(int i=0;i<digits.size();i++)
        {
            if(!used[i])
            {
                temp[k]=digits[i];
                used[i]=1;

                solve(digits,temp,used,ans,k+1);

                used[i]=0;
            }
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> ans;
        vector<int> temp(3);
        vector<int> used(digits.size(),0);

        solve(digits,temp,used,ans,0);
        
        return vector<int>(ans.begin(), ans.end());
    }
};