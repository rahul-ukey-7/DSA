class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();

        if(n==1)
        {
            return stones[0];
        }

        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());

            int x=stones.back();
            stones.pop_back();
            int y=stones.back();
            stones.pop_back();

            stones.push_back(x-y);
        }

        return stones[0];
    }
};