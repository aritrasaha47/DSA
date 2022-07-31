class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
      const int N=50000;

    int idx[N]={0};
    int mx=INT_MIN,diff;
    int ans=INT_MAX;
    for(int i=0;i<nums.size();i++)
    {
        idx[nums[i]]++;
    }
    for(int i=0;i<N;i++)
    {
        mx=max(mx,idx[i]);
    }
    //mx is the degree

    for(int i=0;i<N;i++)
    {
        if(idx[i]==mx)
        {
            int p=INT_MAX,q=INT_MIN;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                {
                    p=min(p,j);
                    q=max(q,j);
                }
            }
            diff=q-p;
            ans=min(diff,ans);
        }
    }
    return ans+1;
    }
};