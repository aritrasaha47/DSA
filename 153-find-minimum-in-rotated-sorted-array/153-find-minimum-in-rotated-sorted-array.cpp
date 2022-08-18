class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            cout<<l<<" "<<h<<" "<<mid<<endl;
            if(l==h)
                return nums[l];
            else if(nums[l]<=nums[mid])
            {
                //First part is sorted
                if(nums[mid+1]>nums[mid] && nums[h]>nums[l])
                {
                    h=mid;
                }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                //Second part is sorted
                if(nums[mid-1]>nums[mid] && nums[l]>nums[mid])
                {
                    l=mid;
                }
                else
                {
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};