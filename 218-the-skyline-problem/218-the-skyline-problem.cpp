class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        map<int,vector<int> >m;
        for (auto x:buildings){
            m[x[0]].push_back(x[2]);
            m[x[1]].push_back(x[2]*-1);
        }
        multiset<int> s;
        vector<vector<int>> ans;
        int prev=-1;
        for(auto x:m){
            for(auto y:x.second){
                if(y>0) s.insert(y);
                else if(y<0) s.erase(s.find(y*-1));
            }
            if(s.size() && *s.rbegin()!=prev){
                ans.push_back({x.first,*s.rbegin()}),prev=*s.rbegin();
            }
            if(!s.size()) ans.push_back({x.first,0}),prev=0;
        }
        return ans;
    }
};