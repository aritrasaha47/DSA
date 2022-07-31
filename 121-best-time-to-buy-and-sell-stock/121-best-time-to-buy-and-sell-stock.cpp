class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int ans=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            buy=min(buy,prices[i]);
            ans=max(ans,prices[i]-buy);
        }
        return ans;
    }
};