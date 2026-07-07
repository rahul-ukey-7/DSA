class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;

        for(auto &row : matrix)
        {
            for(int x : row)
            {
                v.push_back(x);
            }
        }

        sort(v.begin(),v.end());

        return v[k - 1];

    }
};