class Solution {
public:
    bool isAnagram(string s, string t) {
        int H[26];
        int i;

        if(s.size()!=t.size())
        {
            return false;
        }

        for(i=0;i<26;i++)
        {
            H[i]=0;
        }

        for(i=0;s[i]!='\0';i++)
        {
            H[s[i]-97]++;
        }

        for(i=0;t[i]!='\0';i++)
        {
            H[t[i]-97]--;

            if(H[t[i]-97]<0)
            {
                return false;
            }
        }

        return true;
    }
};