class Solution {
public:
    int countEven(int num) {
        int count=0,r;
        for(int j=1;j<=num;j++)
        {
            int i=j;
            int sum=0;
            while(i)
            {
                r=i%10;
                sum+=r;
                i/=10;
            }
            if(sum%2==0)
                count++;
        }
        return count;
    }
};