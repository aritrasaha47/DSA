class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans (nums.size());
        int product=1;
        for(int i=0;i<nums.size();i++)
        {
            product=product*nums[i];
            ans[i]=product;
        }
        product=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i==0)
                ans[i]=product;
            else
            {
                ans[i]=ans[i-1]*product;
                product=product*nums[i];
            }
        }
        return ans;
    }
};