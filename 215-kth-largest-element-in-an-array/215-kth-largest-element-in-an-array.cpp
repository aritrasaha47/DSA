class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int val : nums) {
            if(pq.size() < k) {
                pq.push(val);
            }else if(val > pq.top()) {
                pq.pop();
                pq.push(val);
            }
        }
        
        return pq.top();
    }
};