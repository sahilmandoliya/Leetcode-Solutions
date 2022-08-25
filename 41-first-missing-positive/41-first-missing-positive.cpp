#define N 100000000

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                m[nums[i]]=1;
            }
        }
        for(int i=1;i<N;i++){
            if(!m[i]){
                return i;
            }
        }
        return -1;
    }
};

                                   



