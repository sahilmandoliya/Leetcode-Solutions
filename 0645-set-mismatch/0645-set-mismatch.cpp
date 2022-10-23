class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mp;
        for(int i=1;i<=nums.size();i++){
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==2){
                res.push_back(i);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};