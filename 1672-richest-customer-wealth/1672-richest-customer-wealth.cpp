class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=-1;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
            }
            if(wealth>maxWealth){
                maxWealth=wealth;
            }
        }
        return maxWealth;
    }
};