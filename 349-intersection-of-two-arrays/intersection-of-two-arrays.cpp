class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;

        vector<int> ans;
        set<int> s;

        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                s.insert(nums2[j]);
                i++;
                j++;
            }
        }

        for(int x: s)
        {
            ans.push_back(x);
        }

        return ans;
    }
};