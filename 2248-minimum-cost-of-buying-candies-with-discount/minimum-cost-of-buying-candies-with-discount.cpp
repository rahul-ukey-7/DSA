class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int i;
        int n=cost.size();
        int sum=0;
        sort(cost.begin(),cost.end(),greater<int>());

        for(i=0;i<n;i++)
        {
            if(i%3!=2)
            {
                sum+=cost[i];
            }
        }

        return sum;
    }
};