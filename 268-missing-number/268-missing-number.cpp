class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int idx[(n+1)];
        int i;
        for(i=0;i<=n;i++)
        {
            idx[i]=0;
        }
        for(i=0;i<n;i++)
        {
            idx[nums[i]]++;
        }
        for(i=0;i<=n;i++)
        {
            //cout<<idx[i]<<" ";
            if(idx[i]==0)
            {
                return i;
            }
        }
        return i;
    }
};