class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        vector <int> nidx(n,-1);
        int m=matrix.size();
        vector <int> midx(m,-1);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    nidx[j]=0,midx[i]=0;
                }
            }
        }
        while(count(midx.begin(),midx.end(),0)!=0)
        {
                for(int i=0;i<m;i++)
                {
                    if(midx[i]==0)
                    {
                        midx[i]=-1;
                        for(int k=0;k<n;k++)
                        {
                            matrix[i][k]=0;
                        }
                    }
                }
        }
        while(count(nidx.begin(),nidx.end(),0)!=0)
        {
                for(int i=0;i<n;i++)
                {
                    if(nidx[i]==0)
                    {
                        nidx[i]=-1;
                        for(int k=0;k<m;k++)
                        {
                            matrix[k][i]=0;
                        }
                    }
                }
        }
    }
};