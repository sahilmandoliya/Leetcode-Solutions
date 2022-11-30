class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int> v;
        for(auto i: mp){
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]) return false;
        }
        return true;
    }
};