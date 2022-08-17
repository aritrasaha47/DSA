class Solution {
public:
    int countEven(int num) {
        
        int count = 0;
        int r;
        for( int i=1; i<=num; ++i )
        {
            int k=i;
            int sum=0;
            while( k != 0 )
            {
                r = k % 10;
                sum = sum + r;
                k = k/10;
            }
            if(sum%2==0){
                count++;
            }
            
        }
        
        
        return count;
    }
};