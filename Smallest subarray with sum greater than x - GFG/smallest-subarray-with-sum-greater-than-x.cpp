// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x){
        int curSum=0;
        int minLen=n+1;
        int start=0, end=0;
        while(end<n){
            while(curSum<=x && end<n){
                curSum+=arr[end];
                end++;
            }
            while(curSum>x && start<n){
                minLen=min(minLen, end-start);
                curSum-=arr[start];
                start++;
            }
        }
        return minLen;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends