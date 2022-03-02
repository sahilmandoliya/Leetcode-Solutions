class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>0){
                nums[i]+=nums[i-1];
            }
        }
        int max_element=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max_element){
                max_element=nums[i];
            }
        }
        return max_element;
    }
};