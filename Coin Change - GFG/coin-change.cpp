// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int S[], int m, int n) {
        long long int table[n+1];
        memset(table, 0, sizeof(table));
        table[0]=1;
        for(int i=0;i<m;i++){
            for(int j=S[i];j<=n;j++){
                table[j]+=table[j-S[i]];
            }
        }
        return table[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends