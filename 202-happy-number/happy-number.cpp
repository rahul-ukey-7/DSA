class Solution {
public:

    bool solve(int n,unordered_set<int> &vis)
    {
        if(n==1)
        {
            return true;
        }

        if(vis.count(n))
        {
            return false;
        }

        vis.insert(n);

        int squaresum=0;

        while(n!=0)
        {
            squaresum+=pow(n%10,2);
            n=n/10;
        }

        return solve(squaresum,vis);
    }

    bool isHappy(int n) {

        unordered_set<int> vis;
        return solve(n,vis);
    }
};