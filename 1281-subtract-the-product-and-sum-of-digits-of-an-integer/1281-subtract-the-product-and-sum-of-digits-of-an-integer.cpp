class Solution {
public:
    int subtractProductAndSum(int n) {
        int a,b;
        a=n;
        int p=1,s=0;
        while(a)
        {
            int r=a%10;
            s+=r;
            p*=r;
            a/=10;
        }
        return p-s;
    }
};