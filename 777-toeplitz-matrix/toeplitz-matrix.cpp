class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int flag=1;
        int i,j;

        for(i=1;i<matrix.size();i++)
        {
            for(j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==matrix[i-1][j-1])
                {

                }
                else
                {
                    flag=0;
                }
            }
        }

        if(flag==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};