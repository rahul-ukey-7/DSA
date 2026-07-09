class Solution {
public:
    int maxDepth(string s) {
        int lastcount=0;
        int count=0;
        int i;

        stack<char> st;

        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                
                count=st.size();
                if(lastcount>=count)
                {
                
                }
                else
                {
                    lastcount=count;
                }
            }
            else if(s[i]==')')
            {
                st.pop();
            }
        }

        return lastcount;
    }
};