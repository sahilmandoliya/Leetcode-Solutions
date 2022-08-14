class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int maxTillNow=0, tillNow=0;
        for(int i=0;i<n;i++){
            if(i==0 || nums[i-1]<nums[i]){
                tillNow++;
                maxTillNow=max(tillNow, maxTillNow);
            }else{
                tillNow=1;
            }
        }
        return maxTillNow;
    }
};
