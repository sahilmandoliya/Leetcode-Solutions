//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    void res(int arr[], int n, int total, vector<int> &pre){
        vector<int> cur(total+1, 0);
        pre[0]=cur[0]=1;
        if(arr[0]<=total) pre[arr[0]]=1;
        for(int i=1;i<n;i++){
            for(int ind=1;ind<=total;ind++){
                bool lft=pre[ind];
                bool re=false;
                if(arr[i]<=ind) re=pre[ind-arr[i]];
                cur[ind]=re|lft;
            }
            pre=cur;
        }
    }
	int minDifference(int arr[], int n)  { 
	    int total=0;
	    for(int i=0;i<n;i++) total+=arr[i];
	    int minDiff=INT_MAX;
	    vector<int> pre(total+1, 0);
	    res(arr, n, total, pre);
	    for(int i=0;i<total;i++){
	        if(pre[i]!=0){
	            minDiff=min(minDiff, abs(i-total+i));   
	        }
	    }
	    return minDiff;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends