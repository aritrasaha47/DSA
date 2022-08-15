class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //nums.push_back(NULL);
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i])
            {
                nums.erase(nums.begin()+i+1);
                --i;
            }
        }
        return nums.size();
    }
};