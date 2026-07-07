class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j;
        int m=matrix.size();
        int n=matrix[0].size();

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }

        return false;
    }
};