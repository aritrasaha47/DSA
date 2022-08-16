class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque <int> d;
        vector <int> ans;
        for(int i=0;i<k-1;i++)
        {
            while(d.size()>0 && nums[d.back()]<nums[i])
            {
                d.pop_back();
            }
            d.push_back(i);
        }
        //ans.push_back(nums[d.front()]);
        for(int i=k-1;i<nums.size();i++)
        {
            if(d.size()>0 && (i-d.front())>=k)
            {
                d.pop_front();
            }
            while(d.size()>0 && nums[d.back()]<nums[i])
            {
                d.pop_back();
            }
            d.push_back(i);
            ans.push_back(nums[d.front()]);
        }
        return ans;
    }
};