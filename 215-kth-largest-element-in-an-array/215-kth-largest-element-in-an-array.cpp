class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int,vector <int> > p;
        for(int i=0;i<nums.size();i++)
            p.push(nums[i]);
        for(int i=0;i<k-1;i++)
            p.pop();
        return p.top();
    }
};