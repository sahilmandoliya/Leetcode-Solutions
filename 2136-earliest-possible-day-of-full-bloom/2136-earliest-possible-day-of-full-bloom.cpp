class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int, int>> v;
        for(auto i=0;i<plantTime.size();i++){
            v.push_back({growTime[i], plantTime[i]});
        }
        sort(begin(v), end(v));
        int res=0;
        for(auto [g, p] : v){
            res=max(res, g)+p;
        }
        return res;
    }
};