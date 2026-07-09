class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        int i;

        for(i=0;i<logs.size();i++)
        {
            if(logs[i]=="./")
            {

            }
            else if(logs[i]=="../")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else if(logs[i]=="x/")
            {
                string s=st.top();
                st.pop();
                st.pop();
                st.push(s);
            }
            else
            {
                st.push(logs[i]);
            }
        }

        return st.size();
    }
};