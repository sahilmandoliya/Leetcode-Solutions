//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        int prev1=0, prev2=0;
        for(int i=1;i<n;i++){
            int jumpTwo=INT_MAX;
            int jumpOne=prev1+abs(height[i]-height[i-1]);
            if(i>1){
                jumpTwo=prev2+abs(height[i]-height[i-2]);
            }
            int curri=min(jumpOne, jumpTwo);
            prev2=prev1;
            prev1=curri;
        }
        return prev1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends