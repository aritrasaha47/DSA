class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    map <int,int> m;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }

    map<int,int> ::iterator it;



    // for(it=m.begin();it!=m.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    it=m.end();
    if(k>nums.size())
    {
        it--;
    }
    else
    {
        while(k>0)
        {
            it--;
            k-=it->second;
            //cout<<k<<" ";
        }
    }
    return it->first;

    }
};