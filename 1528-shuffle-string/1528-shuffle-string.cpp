class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res(s.size(),0);
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(indices[j]==i)
                {
                    res[i]=s[j];
                }
            }
        }
        return res;
    }
};