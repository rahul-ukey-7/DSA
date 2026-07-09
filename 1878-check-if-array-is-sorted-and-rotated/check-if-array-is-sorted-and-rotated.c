bool check(int* nums, int numsSize) {
    int i,count=0;

    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>nums[(i+1)%numsSize])
        {
            count++;
        }
    }

    return count<=1;

    
}