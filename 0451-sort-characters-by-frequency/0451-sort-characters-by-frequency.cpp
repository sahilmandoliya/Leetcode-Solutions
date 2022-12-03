class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++)    mp[s[i]]++;
        vector<pair<int,char>> v;
        for(auto &it:mp)    v.push_back({it.second,it.first});
        sort(v.rbegin(),v.rend());
        string ans;
        int count=0;
        for(int i=0;i<v.size();i++){
            count=v[i].first;
            char ch = v[i].second;
            while(count!=0){
                ans.push_back(ch);
                count--;
            }
        }
        return ans;
    }
};