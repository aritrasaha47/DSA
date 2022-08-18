class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        int half=arr.size()/2;
        vector <int> ans;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto& it:m)
        {
            ans.push_back(it.second);
        }
        sort(ans.begin(),ans.end(),greater <int>());
        int count=0;
        while(half>0)
        {
            half-=ans[count];
            count++;
        }
        return count;
    }
};