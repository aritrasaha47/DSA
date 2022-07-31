class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
    int count=0;
    for(int k=0;k<grid.size();k++)
    {
        for(int i=0;i<grid.size();i++)
        {
            bool flag=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[k][j]==grid[j][i])
                    continue;
                flag=1;
            }
            if(flag==0)
                count++;
        }
    }
    return count;
    }
};