class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(low<high){
            mid=(low+high)/2;
            int count=0;
            for(int num:nums){
                if(num<=mid){
                    count++;
                }
            }
            if(count>mid){
                    high=mid;
                }
                else low=mid+1;
        }
        return low;
    }
};