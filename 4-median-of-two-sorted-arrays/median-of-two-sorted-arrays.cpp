class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int i=0,j=0;
        int m=nums1.size();
        int n=nums2.size();
        double ans;

        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums3.push_back(nums1[i++]);
            }
            else
            {
                nums3.push_back(nums2[j++]);
            }
        }

        for(;i<m;i++)
        {
            nums3.push_back(nums1[i]);
        }
        for(;j<n;j++)
        {
            nums3.push_back(nums2[j]);
        }

        int o=nums3.size();

        if(o%2==0)
        {
            ans=(nums3[(o/2)-1]+nums3[o/2])/2.0;
        }
        else
        {
            ans=(nums3[o/2])*1.0;
        }

        return ans;
    }
};