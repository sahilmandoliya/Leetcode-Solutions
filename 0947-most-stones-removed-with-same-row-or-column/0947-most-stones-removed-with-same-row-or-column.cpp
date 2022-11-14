class Solution {
public:
    int dfs(vector<vector<int>> &stones, int ind, vector<int> &vis, int &n){
        vis[ind]=1;
        int res=0;
        for(int i=0;i<n;i++){
            if(!vis[i] && (stones[i][0]==stones[ind][0] || stones[i][1]==stones[ind][1])){
                res+=(dfs(stones, i, vis, n)+1);
            }
        }
        return res;
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int> vis(n, 0);
        int res=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                res+=dfs(stones, i, vis, n);
            }
        }
        return res;
        
    }
};