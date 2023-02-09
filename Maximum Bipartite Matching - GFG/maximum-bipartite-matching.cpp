//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool dfs(vector<unordered_map<int,int>> &graph, vector<bool> &visited, int start, int target){
        if(start==target) return true;
        for(auto& v : graph[start]){
            int next = v.first, capacity=v.second;
            if(visited[next] || capacity==0) continue;
            visited[next] = true;
            swap(graph[start][next], graph[next][start]);
            if(dfs(graph, visited, next, target)) return true;
            swap(graph[start][next], graph[next][start]);
        }
        return false;
    }
    
	int maximumMatch(vector<vector<int>>&G){
	    int i_applicants=G.size(), j_jobs=G[0].size(), finalnode = i_applicants+j_jobs;
        vector< unordered_map<int,int> > graph(i_applicants+j_jobs+1);
	    for(int i=0; i<i_applicants; i++) 
	        for(int j=0; j<j_jobs; j++) {
	            if(G[i][j]==0) continue;
	            graph[i][j+i_applicants]=1;
	        }
	    for(int j=0; j<j_jobs; j++) graph[j+i_applicants][finalnode]=1;
        int count=0;
        for(int i=0; i<i_applicants; i++){
            vector<bool> visited(i_applicants+j_jobs+1, false);
            if(dfs(graph, visited, i, finalnode)) count++;
        }
        return count;
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>G(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> G[i][j];
		}
		Solution obj;
		int ans = obj.maximumMatch(G);
		cout << ans << "\n";    
	}
	return 0;
}
// } Driver Code Ends