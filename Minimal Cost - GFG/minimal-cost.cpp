//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int helper(int ind, vector<int>&height, vector<int> &dp, int k){
        if(ind==0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int minCost=INT_MAX;
        for(int i=1;i<=k;i++){
            if(ind-i>=0){
                int thisOne=helper(ind-i, height, dp, k)+abs(height[ind]-height[ind-i]);
                minCost=min(minCost, thisOne);
            }
        }
        return dp[ind]=minCost;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> dp(n, -1);
        return helper(n-1, height, dp, k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends