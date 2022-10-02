class Solution {
public:
    int mod=1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        vector<int> prev(target+1, 0);
        vector<int> curr(target+1, 0);
        prev[0]=1;
        for(int i=1;i<=n;i++){
            for(int targ=1;targ<=target;targ++){
                int ways=0;
                for(int j=1;j<=k;j++){
                    int curr=0;
                    if(targ>=j){
                        curr=prev[targ-j];
                    }
                    ways=(ways+curr)%mod;
                }
                curr[targ]=ways;
            }
            prev=curr;
        }
        return prev[target];
    }
};