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
    if(k<=nums.size())
    {
        while(k>0)
        {
            it--;
            k-=it->second;
        }
    }
    return it->first;

    }
};