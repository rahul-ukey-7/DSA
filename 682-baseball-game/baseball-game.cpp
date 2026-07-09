class Solution {
public:
    int calPoints(vector<string>& operations) {
        int i;
        int sum=0;

        stack<int> st;

        for(i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                
                st.push(x);
                st.push(x+y);
            }
            else if(operations[i]=="D")
            {
                int x=st.top();
                x=2*x;

                st.push(x);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(operations[i]));
            }
        }

        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }

        return sum;
    }
};