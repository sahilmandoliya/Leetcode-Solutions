class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long n=nums.size();
        long long count=0;
        long long leftsum=0;
        long long rightsum=0;
        for(long long i=0;i<n;i++){
            rightsum+=nums[i];
        }
        for(long long i=0;i<nums.size()-1;i++){
            leftsum+=nums[i];
            rightsum-=nums[i];
            if(leftsum>=rightsum){
                count++;
            }
        }
        return count;
    }
};