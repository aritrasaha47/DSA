class Solution {
public:
    char repeatedCharacter(string s) {
    int idx[100]={0};
        char ch;
    for(int i=0;i<s.size();i++)
    {
        if(idx[s[i]-97]==1)
        {
            ch=s[i];
            break;
        }
        idx[s[i]-97]++;
    }
        return ch;
    }
};