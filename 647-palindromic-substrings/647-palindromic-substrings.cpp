class Solution {
public:
    int countSubstrings(string s) {
        int count=1;
        int n=s.size();
        for(int i=1;i<n;i++){
            count+=expand(s, i, i);
            count+=expand(s, i-1, i);
        }
        return count;
    }
    int expand(string &s, int i, int j){
        int count=0;
        int n=s.size();
        while(i>=0 && j<n && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
};