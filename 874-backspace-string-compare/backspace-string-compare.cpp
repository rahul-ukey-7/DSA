class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i;
        stack<char> st;
        string a="";
        string b="";

        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='#' && st.empty())
            {

            }
            else if(s[i]=='#' && !st.empty())
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
            a+=st.top();
            st.pop();
        }

        for(i=0;t[i]!='\0';i++)
        {
            if(t[i]=='#' && st.empty())
            {

            }
            else if(t[i]=='#' && !st.empty())
            {
                st.pop();
            }
            else
            {
                st.push(t[i]);
            }
        }

        while(!st.empty())
        {
            b+=st.top();
            st.pop();
        }

        return a==b?true:false;
    }
};