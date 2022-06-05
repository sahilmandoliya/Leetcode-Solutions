class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        for(n; n>1;n-=n/2){
            for(int i=0;i<n/2;i++){
                if(i%2==0){
                    nums[i]=min(nums[2 * i], nums[2 * i + 1]);
                }else{
                    nums[i]=max(nums[2 * i], nums[2 * i + 1]);
                }
            }
        }
        return nums[0];
    }
};