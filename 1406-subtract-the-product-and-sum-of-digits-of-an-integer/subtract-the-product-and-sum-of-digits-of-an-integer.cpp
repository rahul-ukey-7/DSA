class Solution {
public:
    int subtractProductAndSum(int n) {
        int x=n;
        int sum=0;
        int prod=1;

        while(x!=0)
        {
            sum+=x%10;
            prod*=x%10;
            x=x/10;
        }

        return prod-sum;
    }
};