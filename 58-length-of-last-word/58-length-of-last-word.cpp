class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool flag=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                for(int j=i;i>=0;j--)
                {
                    if(j==0 && s[j]!=' ')
                        count++;
                    if(s[j]==' ' || j==0)
                    {
                        flag=1;
                        break;
                    }
                    count++;
                }
                if(flag==1)
                    break;
            }
        }
        return count;
    }
};