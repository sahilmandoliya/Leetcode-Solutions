class Solution {
public:
    int numSquares(int n) {
        vector<int> s;
        vector<int> dp(n+1, INT_MAX);
        for(int i = 1;(i*i)<=n;i++){
            s.push_back(i*i);
            dp[i*i] = 1;
        }
        dp[0] = 0;
        for(int i=1;i<=n;i++){
           for(auto &it: s){
               if(i>=it){
                   dp[i] = min(dp[i],1+dp[i-it]);
               }
           }
        }
        return dp[n];
    }
};