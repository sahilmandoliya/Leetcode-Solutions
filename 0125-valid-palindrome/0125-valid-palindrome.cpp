class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])) str+=tolower(s[i]);
        }
        int n=str.length();
        for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[n-i-1]) return false;
        }
        return true;
    }
};