class Solution {
public:
vector<vector<int>> generate(int numRows) 
{
    vector<vector<int>> triangle;
    for (int i=0; i<numRows; i++) 
    {
        vector<int> temp; 
        // for(int k=numRows;k>0;k--)
        // {
        //     temp.push_back();
        // }
        for (int j=0; j<=i; j++) 
        {
            if(j==0 || j==i)
            {
                temp.push_back(1);
            }
            else
            {
               temp.push_back(triangle[i-1][j]+triangle[i-1][j-1]);
            }
        }
        triangle.push_back(temp); 
    }

        return triangle;
}
};