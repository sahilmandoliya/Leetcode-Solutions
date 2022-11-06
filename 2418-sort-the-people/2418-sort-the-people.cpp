class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> vp;
        int n=names.size();
        for(int i=0;i<n;i++){
            vp.push_back({names[i], heights[i]});
        }
        sort(vp.begin(), vp.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
             return a.second > b.second; } );
        vector<string> res;
        for(auto i: vp){
            res.push_back(i.first);
        }
        return res;
    }
};