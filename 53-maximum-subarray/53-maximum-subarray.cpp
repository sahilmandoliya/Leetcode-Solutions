class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxtillnow=INT_MIN;
        int n=nums.size();
        int temp=0;
        for(int i=0;i<n;i++){
            temp=max(nums[i], temp+nums[i]);
            maxtillnow=max(maxtillnow, temp);
        }
        return maxtillnow;
    }
};