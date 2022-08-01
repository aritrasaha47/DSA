class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int a=-1,b;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                a=i-1;
                break;
            }
        }
        if(a!=-1)
        {
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>nums[a])
            {
                b=i;
                break;
            }
        }
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
        }
        reverse(nums.begin()+a+1,nums.end());
    }
};