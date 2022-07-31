class Solution {
public:
    bool isPalindrome(int x) {
        long int a=0;
        int r,b=x;
        while(x!=0)
        {
            r=x%10;
            a=a*10+r;
            x/=10;
        }
        if(a==b && a>=0)
            return true;
        else
            return false;
    }
};