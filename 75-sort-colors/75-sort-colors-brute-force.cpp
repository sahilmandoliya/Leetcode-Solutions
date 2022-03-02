class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0=0, num1=0, num2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                num0++;
            }
            if(nums[i]==1){
                num1++;
            }
            if(nums[i]==2){
                num2++;
            }
        }
        int i=0;
        while(nums.size()>i){
            while(num0>0){
                nums[i]=0;
                num0--;
                i++;
                continue;
            }
            while(num1>0){
                nums[i]=1;
                num1--;
                i++;
                continue;
            }
            while(num2>0){
                nums[i]=2;
                num2--;
                i++;
                continue;
            }
        }
    }
};
