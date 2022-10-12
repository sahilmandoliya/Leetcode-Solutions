class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxPar=0;
        for(int i=0;i<=nums.size()-3;i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                maxPar=max(maxPar, nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return maxPar;
    }
};