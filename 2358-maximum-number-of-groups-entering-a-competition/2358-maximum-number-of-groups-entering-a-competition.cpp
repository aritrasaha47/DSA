class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end(),greater <int>());
        int count =0,prevsum, prevsize;
        int j=1;
        if(grades.size()>=1)
            count=1;
        for(int i=0;i<grades.size();i++)
        {
            int size=0;
            if(i==0)
                prevsum=grades[i];
            for(int sum=0;j<grades.size();j++)
            {
                size++;
                sum=sum+grades[j];
                if(sum<=prevsum && prevsize>=size)
                    continue;
                    cout<<sum<<endl;
                    j=j+1;
                    prevsize=size;
                    prevsum=sum;
                    count++;
                    break;
            }
        }
        return count;
    }
};