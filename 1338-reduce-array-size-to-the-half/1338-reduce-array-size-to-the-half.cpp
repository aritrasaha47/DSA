class Solution {
public:
    static bool cmp(pair<int, int>& a,pair<int, int>& b)
    {
        return a.second > b.second;
    }
  
// Function to sort the map according
// to value in a (key-value) pairs
    vector <pair<int, int> > mapsort(map<int, int>& M)
    {
  
        // Declare vector of pairs
        vector<pair<int, int> > A;
  
        // Copy key-value pair from Map
        // to vector of pairs
        for (auto& it : M) 
        {
            A.push_back(it);
        }
  
        // Sort using comparator function
        sort(A.begin(), A.end(), cmp);
  
        // Print the sorted value
//         for (auto& it : A) 
//         {
  
//         cout << it.first << ' '
//              << it.second << endl;
//         }
        return A;
    }
    int minSetSize(vector<int>& arr) {
        map <int,int> m;
        vector<int> ans;
        int s=arr.size()/2;
        vector<pair<int, int> > a;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        a=mapsort(m);
        for (auto& it : a) 
        {
        ans.push_back(it.first);
            s-=it.second;
            if(s<=0)
                break;
        }
        return ans.size();
    }
};