class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret;
        for(int i=0;i<items1.size();i++)
        {
            vector <int> temp;
            for(int j=0;j<items2.size();j++)
            {
                if(items1[i][0]==items2[j][0])
                {
                    temp.push_back(items1[i][0]);  
                    temp.push_back(items1[i][1]+items2[j][1]);
                    ret.push_back(temp);
                    items1[i][0]=-1;
                    items2[j][0]=-1;
                    break;
                }
            }
        }
        for(int i=0;i<items1.size();i++)
        {
            vector <int> temp;
            if(items1[i][0]!=-1)
            {
                temp.push_back(items1[i][0]);
                temp.push_back(items1[i][1]);
                ret.push_back(temp);
            }
        }
        for(int i=0;i<items2.size();i++)
        {
            vector <int> temp;
            if(items2[i][0]!=-1)
            {
                temp.push_back(items2[i][0]);
                temp.push_back(items2[i][1]);
                ret.push_back(temp);
            }
        }
        sort(ret.begin(), ret.end());
        return ret;
        
    }
};