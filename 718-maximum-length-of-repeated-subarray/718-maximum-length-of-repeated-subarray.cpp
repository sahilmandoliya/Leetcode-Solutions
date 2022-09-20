class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(), n=nums2.size(), res=0;
        vector<int> curr(n+1,0);
        for(int i=1;i<=m;i++){
            int pre=curr[0];
            for(int j=1;j<=n;j++){
                int temp=curr[j];
                if(nums1[i-1]==nums2[j-1]){
                    curr[j]=pre+1;
                    res=max(res, curr[j]);
                }else{
                    curr[j]=0;
                }
                pre=temp;
            }  
        }
        return res;
    }
};