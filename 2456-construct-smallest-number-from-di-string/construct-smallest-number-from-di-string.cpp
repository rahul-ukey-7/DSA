class Solution {
public:
    string smallestNumber(string pattern) {
        int n=pattern.size();

        string num="";

        int counter=1;
        stack<char> st;

        for(int i=0;i<n;i++)
        {   
            st.push(counter+'0');
            counter++;
            if(pattern[i]=='I')
            {
                while(!st.empty())
                {
                    num+=st.top();
                    st.pop();
                }
            }
            else
            {

            }
        }

        st.push(counter + '0');

        while(!st.empty())
        {
            num+=st.top();
            st.pop();
        }

        return num;
    }
};