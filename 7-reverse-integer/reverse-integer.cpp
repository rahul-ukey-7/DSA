class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int r;
        while(x!=0)
        {
            if((x>(pow(2,31)-1))||x<-pow(2,31))
            {
            return 0;
            }
            r=x%10;
            x/=10;

            if (rev > INT_MAX / 10 || 
           (rev == INT_MAX / 10 && r > 7))
            return 0;

        if (rev < INT_MIN / 10 || 
           (rev == INT_MIN / 10 && r < -8))
            return 0;

            rev=rev*10+r;
        
            
        }
        return rev;
    }
};