class Solution {
public:
    bool isSub(string &s, string &t, int m, int n){
        if(m==0) return true;
        if(n==0) return false;
        if(s[m-1]==t[n-1]){
            return isSub(s, t, m-1, n-1);
        }
        return isSub(s, t, m, n-1);
    }
    
    bool isSubsequence(string s, string t) {
        return (isSub(s, t, s.length(), t.length()));
    }
};