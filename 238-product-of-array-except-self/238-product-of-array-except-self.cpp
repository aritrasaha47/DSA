class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int left [n];
        int right [n];
        int product=1;
        for(int i=0;i<nums.size();i++)
        {
            product=product*nums[i];
            left[i]=product;
        }
        product=1;
        for(int i=n-1;i>0;i--)
        {
            product=product*nums[i];
            right[i]=product;
        }
        int a[n];
        vector <int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                a[0]=right[1];
            }
            else if(i==(nums.size()-1))
            {
                a[nums.size()-1]=left[nums.size()-2];
            }
            else
            {
                a[i]=left[i-1]*right[i+1];
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(a[i]);
        }
        return ans;
    }
};