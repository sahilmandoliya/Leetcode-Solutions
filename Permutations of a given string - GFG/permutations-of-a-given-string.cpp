//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(set<string> &temp, string s, int index){
	        if(index==s.length()){
	            temp.insert(s);
	            return ;
	        }
	        for(int i=index; i<s.length();i++){
	            swap(s[index], s[i]);
	            solve(temp, s, index+1);
	            swap(s[index], s[i]);
	        }
	    }
		vector<string>find_permutation(string S){
		    set<string> temp;
		    solve(temp, S, 0);
		    vector<string> res(temp.begin(), temp.end());
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends