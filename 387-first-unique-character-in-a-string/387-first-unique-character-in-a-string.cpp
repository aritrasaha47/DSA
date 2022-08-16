class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> idx(26,0);
        for(int i=0;i<s.size();i++)
        {
            idx[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(idx[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};