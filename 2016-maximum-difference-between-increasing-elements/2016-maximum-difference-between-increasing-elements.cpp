class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mintillnow=INT_MAX;
        int maxtillnow=0;
        for(int i=0;i<n;i++){
            mintillnow=min(mintillnow, nums[i]);
            maxtillnow=max(maxtillnow, nums[i]-mintillnow);
        }
        if(maxtillnow==0 )return -1;
        return maxtillnow;
    }
};