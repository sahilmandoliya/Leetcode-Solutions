class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> twonums;
        int left=0;
        int right=n-1;
        while(left<right){
            int tot=numbers[left]+numbers[right];
            if(tot==target){
                twonums={left+1, right+1};
                break;
            }else if(tot>target){
                right--;
            }else if(tot<target){
                left++;   
            }
        }
        return twonums;
    }
};