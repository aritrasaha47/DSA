class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        for(int i=0,j=i+1;j<nums.size() && i<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            if(j==nums.size()-1)
            {
                i++;
                j=i;
            }
        }
        return ans;
    }
};