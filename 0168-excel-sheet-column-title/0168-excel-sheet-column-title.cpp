class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        n--;
        while(n>=0){
            s+=('A'+n%26);
            n/=26;
            n--;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};