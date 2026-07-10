class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxlength=0;

        for(int i=0;i<n;i++)
        {
            int left=i;
            int right=i;

            while(left>=0 && right<n && s[left]==s[right])
            {
                int length=right-left+1;

                if(length>maxlength)
                {
                    maxlength=length;
                    start=left;
                }

                left--;
                right++;
            }

            left=i;
            right=i+1;

            while(left>=0 && right<n && s[left]==s[right])
            {
                int length=right-left+1;

                if(length>maxlength)
                {
                    maxlength=length;
                    start=left;
                }

                left--;
                right++;
            }

        }

        return s.substr(start,maxlength);
    }
};