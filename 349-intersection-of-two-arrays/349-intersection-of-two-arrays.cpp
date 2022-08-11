class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> set;
        vector <int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            set.insert(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(set.count(nums2[j])==1)
            {
                ans.push_back(nums2[j]);
                set.erase(nums2[j]);
            }
        }
        return ans;
    }
};