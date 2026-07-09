class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int XOR=0;
        int Xor=0;

        for(i=0;i<=nums.size();i++)
        {
            XOR^=i;
        }

        for(i=0;i<nums.size();i++)
        {
            Xor^=nums[i];
        }

        return XOR^Xor;
    }
};