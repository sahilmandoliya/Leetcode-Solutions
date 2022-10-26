class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2) return false;
        unordered_map<int, int> mp;
        mp[0]=-1;
        int rSum=0;
        for(int i=0;i<nums.size();i++){
            rSum+=nums[i];
            if(k!=0){
                rSum=rSum%k;
            }
            if(mp.find(rSum)!=mp.end()){
                if(i-mp[rSum]>1){
                    return true;
                }
            }else{
                mp[rSum]=i;
            }
        }
        return false;
    }
};