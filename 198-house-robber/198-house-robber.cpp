class Solution {
public:
    int f(int ind, vector<int> &nums, vector<int> &dp){
        if(ind==0) return nums[0];
        if(ind<1) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int rob=nums[ind]+f(ind-2, nums, dp);
        int notrob=f(ind-1, nums, dp);
        return dp[ind]=max(rob, notrob);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, -1);
        return f(n-1, nums, dp);
    }
};