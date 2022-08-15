class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map <int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        map <int,int> :: iterator it;
        it=m.end();
        if(m.size()<3)
            it--;
        else
        {
            int t=3;
            while(t--)
                it--;
        }
        return it->first;
    }
};