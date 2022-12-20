//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) { 
        int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++){
            max1=max(max1,arr[i]+i);
            max2=max(max2,arr[i]-i);
            min1=min(min1,arr[i]-i);
            min2=min(min2,arr[i]+i);
        }
        return max((max1-min2),(max2-min1));
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends