class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int leftsum=0;
            int rightsum=0;
            for(int j=0;j<i;j++){
                leftsum+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                rightsum+=nums[j];
            }
            if(leftsum==rightsum){
                return i;
            }
        }
        return -1;
    }
};