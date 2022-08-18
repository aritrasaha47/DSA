class Solution {
public:
    int findMin(vector<int>& nums) {
    int l=0;
    int h=nums.size()-1;
    if(nums[l]<=nums[h])
    {
        return nums[0];
    }
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(nums[mid]>nums[mid+1])
        {
            return nums[mid+1];
        }
        else if(nums[mid]<nums[mid-1])
        {
            return nums[mid];
        }
        else if(nums[l]<=nums[mid])
        {
            l=mid+1;
        }
        else if(nums[mid]<=nums[h])
        {
            h=mid-1;
        }
    }
    return -1;
    }
};