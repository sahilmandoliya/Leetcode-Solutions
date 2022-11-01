class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> res(n, -1);
        for(int i=0;i<n;i++){
            int curr=i;
            int nextPos=-1;
            for(int j=0;j<m;j++){
                nextPos=curr+grid[j][curr];
                if(nextPos<0 || nextPos>=n || grid[j][curr]!=grid[j][nextPos]){
                    curr=-1;
                    break;
                }
                curr=nextPos;
            }
            res[i]=curr;
        }
        return res;
    }
};