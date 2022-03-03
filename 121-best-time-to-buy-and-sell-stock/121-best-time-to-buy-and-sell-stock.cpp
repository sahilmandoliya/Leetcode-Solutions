class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int n=prices.size();
        int start=0, end=1;
        while(end<n){
            if(prices[start]<prices[end]){
                maxp=max(maxp, prices[end]-prices[start]);
            }else{
                start=end;
            }
            end++;
        }
        return maxp;
    }
};