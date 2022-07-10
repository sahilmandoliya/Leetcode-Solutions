class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> unmap;
        for(int i=0;;i++){
            auto it=unmap.find(target-nums[i]);
            if(it!=unmap.end()){
                return vector<int> {i, it->second};
            } 
            unmap[nums[i]]=i;
        }
    }
};