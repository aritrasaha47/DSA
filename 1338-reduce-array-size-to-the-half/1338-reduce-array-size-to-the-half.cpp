class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b)
    {
        return a.second > b.second;
    }
  
// Function to sort the map according
// to value in a (key-value) pairs
    int mapsort(map<int, int>& M,int s)
    {
  
        // Declare vector of pairs
        vector<pair<int, int> > A;
        vector <int> ans;
        // Copy key-value pair from Map
        // to vector of pairs
        for (auto& it : M) 
        {
            A.push_back(it);
        }
  
        // Sort using comparator function
        sort(A.begin(), A.end(), cmp);
  
        for (auto& it : A) 
        {
        ans.push_back(it.first);
            s-=it.second;
            if(s<=0)
                break;
        }
        return ans.size();
    }
    int minSetSize(vector<int>& arr) {
        map <int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        return mapsort(m,arr.size()/2);

    }
};