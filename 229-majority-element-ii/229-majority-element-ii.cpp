class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> finarr;
        unordered_map<int, int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int count=0;
        for(auto j : mp){
            if(j.second>n/3){
                finarr.push_back(j.first);
            }
        }
        return finarr;
    }
};