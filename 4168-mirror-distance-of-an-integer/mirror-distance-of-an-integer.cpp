class Solution {
public:
    int mirrorDistance(int n) {
        int x=n;
        int rev=0;
        int v;

        while(x!=0)
        {
            v=x%10;
            rev=10*rev+v;
            x=x/10;
        }

        if(rev>n)
        {
            return rev-n;
        }
        else
        {
            return n-rev;
        }
    }
};