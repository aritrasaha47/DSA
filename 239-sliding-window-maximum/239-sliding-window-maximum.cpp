class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque <int> d;
        vector <int> ans;
        for(int i=0;i<k;i++)
        {
            if(d.size()>0 && nums[d.back()]<nums[i])
            {
                while(d.size()>0 && nums[d.back()]<nums[i])
                {
                    d.pop_back();
                }
            }
            d.push_back(i);
        }
        ans.push_back(nums[d.front()]);
        
        for(int i=k;i<nums.size();i++)
        {
            while(d.size()>0 && d.front()<=i-k)
            {
                d.pop_front();     
            }
            if(d.size()>0 && nums[d.back()]<nums[i])
            {
                while(d.size()>0 && nums[d.back()]<nums[i])
                {
                    d.pop_back();
                }
            }
            d.push_back(i);
        
            ans.push_back(nums[d.front()]);
        }
        
        // for(int i=0;i<d.size();i++)
        //     cout<<d[i]<<" ";
        
        return ans;
    }
};