#define mod 1000000007

class Solution {
public:
    int concatenatedBinary(int n) {
        long long int p=1;
        int ans=0;
        for (int i = n; i >=1; i--) {
            int j=i;
            while (j){
                int b=j&1;
                if(b){
                    ans+=p;
                    ans=ans%mod;
                }
                p=p*2;
                p=p%mod;
                j=j>>1;   
            }   
        }
        return ans;
    }
};