class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        int j;
        string ans="";

        stack<char> st;

        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>=48 && s[i]<=57 && !st.empty())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        i=0;

        if(st.empty())
        {
            return "";
        }
        else
        {
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
                i++;
            }

            reverse(ans.begin(),ans.end());

            

            return ans;
        }
    }
};