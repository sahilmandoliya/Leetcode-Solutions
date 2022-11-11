class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int a=cost[0], b=cost[1];
        if(n<=2) return min(a, b);
        for(int i=2;i<n;i++){
            int curr=cost[i]+min(a, b);
            a=b, b=curr;
        }
        return min(a, b);
    }
};