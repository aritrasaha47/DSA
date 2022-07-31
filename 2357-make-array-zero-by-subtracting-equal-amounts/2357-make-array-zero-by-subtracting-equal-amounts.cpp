class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool flag=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    flag=1;
                }
            }
        int count=0;
        while(flag)
        {
            int mn=INT_MAX;
            flag=0;
            count++;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    mn=min(mn,nums[i]);
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    nums[i]=nums[i]-mn;
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    flag=1;
                }
            }
        }
        return count;
    }
};