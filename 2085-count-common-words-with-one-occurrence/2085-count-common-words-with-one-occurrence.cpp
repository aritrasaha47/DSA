class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map <string,int> m1;
        unordered_map <string,int> m2;
        for(int i=0;i<words1.size();i++)
        {
            m1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++)
        {
            m2[words2[i]]++;
        }
        int count=0;
        if(m1.size()>m2.size())
        {
            unordered_map <string,int> ::iterator it1;
            unordered_map <string,int> ::iterator it2;
            for(it1=m1.begin();it1!=m1.end();it1++)
            {
                if(m2.count(it1->first))
                {
                    it2=m2.find(it1->first);
                    if(it1->second ==1 && it2->second==1)
                    {
                        count++;
                    }
                 }
            }
        }
        else
        {
            unordered_map <string,int> ::iterator it1;
            unordered_map <string,int> ::iterator it2;
            for(it1=m2.begin();it1!=m2.end();it1++)
            {
                if(m1.count(it1->first))
                {
                    it2=m1.find(it1->first);
                    if(it1->second ==1 && it2->second==1)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};