class Solution {
public:
    int mySqrt(int x) {

        long long int y;

        y=exp(log(x)/2);

        while((y + 1)*(y + 1)<=x)
        {
            y++;
        }

        while(y*y>x)
        {
            y--;
        }

        return y;
    }
};