class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    map <int,int> m;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    map<int,int> ::iterator it;
    it=m.end();
    while(k>0 && k<=nums.size())
    {
        it--;
        k-=it->second;
    }
    return it->first;

    }
};