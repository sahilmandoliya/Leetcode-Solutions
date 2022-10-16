class Solution {
public:
    int minDifficulty(vector<int>& jd, int d) {
        int n=jd.size();
        vector<vector<int> > maxi(jd.size()+1,vector<int>(jd.size()+1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int ma=INT_MIN;
                for(int k=i;k<=j;k++){
                    ma=max(ma,jd[k]);
                }
                maxi[i][j]=ma;
            }
        }
        vector<vector<int> > dp(n+1,vector<int>(d+1,-1));
        for(int i=0;i<=d;i++){
            dp[n][i]= (i==0) ? 0 : 100000;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=(i==n) ? 0 : 100000;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<=d;j++){
                if((n-i)<j){
                    dp[i][j]=100000;
                }
                else{
                    dp[i][j]=100000;
                    for(int k=i;k<n;k++){
                        dp[i][j]=min(dp[i][j],maxi[i][k]+dp[k+1][j-1]);
                    }
                }
            }
        }
       
        return dp[0][d]==100000 ? -1 : dp[0][d];
    }
};