class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m!=n) return false;
        int m1[256] ={0}, m2[256]={0};
        for(int i=0;i<n;i++){
            if(m1[s[i]]!= m2[t[i]]) return false;
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
        
    }
};