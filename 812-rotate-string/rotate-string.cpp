class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
        int i;
        int c=n-1;

        if(s==goal)
        {
            return true;
        }

        while(c)
        {
            char x=goal[0];
            for(i=0;i<n-1;i++)
            {
                goal[i]=goal[i+1];
            }
            goal[n-1]=x;

            if(goal==s)
            {
                return true;
            }
            
            c--;
        }

        return false;
        
    }
};