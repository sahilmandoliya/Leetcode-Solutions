class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffledArr;
        for(int i=0;i<n;i++){
            shuffledArr.push_back(nums[i]);
            shuffledArr.push_back(nums[n+i]);
        }
        return shuffledArr;
    }
};