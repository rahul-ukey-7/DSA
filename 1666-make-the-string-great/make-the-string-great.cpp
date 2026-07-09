class Solution {
public:
    string makeGood(string s) {
        int i;
        string ans="";
        stack<char> st;

        for(i=0;s[i]!='\0';i++)
        {
            if(!st.empty() && (st.top()==s[i]-32) && (s[i]>=97 && s[i]<=122))
            {
                st.pop();
            }
            else if(!st.empty() && (st.top()==s[i]+32) && (s[i]>=65 && s[i]<=90))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;

    }
};