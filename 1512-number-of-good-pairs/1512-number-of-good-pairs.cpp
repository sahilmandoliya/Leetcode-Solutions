class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> unmp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=unmp[nums[i]]++;
        }
        return count;
    }
};