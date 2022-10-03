class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int sum=accumulate(neededTime.begin(), neededTime.end(), 0);
        int i=0;
        int res=0;
        while(i<n){
            char curr=colors[i];
            int maxCost=neededTime[i];
            int j=i;
            while(j<n && colors[j]==curr){
                maxCost=max(maxCost, neededTime[j]);
                j++;
            }
            if(j>i){
                res+=maxCost;
            }
            i=j;
        }
        return sum-res;
    }
};