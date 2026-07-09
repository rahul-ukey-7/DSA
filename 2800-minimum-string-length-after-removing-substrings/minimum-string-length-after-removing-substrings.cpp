class Solution {
public:
    int minLength(string s) {
        int i;
        stack<char> st;
        for(i=0;s[i]!='\0';i++)
        {
            if(!st.empty() && ((st.top()=='A' && s[i]=='B') || (st.top()=='C' && s[i]=='D')))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        return st.size();
    }
};