class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        vector<long long int> prefSum(n, 0);
        prefSum[0]=nums[0];
        for(int i=1;i<n;i++)    prefSum[i]=prefSum[i-1]+nums[i];
        int res=INT_MAX;
        int index=n-1;
        for(int i=0;i<n-1;i++){
            double numLeft=i+1;
            double numRight=n-numLeft;
            double leftSum=prefSum[i];
            double rightSum=prefSum[n-1]-prefSum[i];
            int a=leftSum/numLeft;
            int b=rightSum/numRight;
            int calc=abs(a-b);
            if(calc<res){
                res=calc;
                index=i;
            }
        }
        int a=prefSum[n-1]/n;
        if(res>a){
            res=a;
            index=n-1;
        }
        return index;
    }
};